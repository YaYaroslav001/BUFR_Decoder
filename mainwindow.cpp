/*Прикладная программа для расшифровки сообщений BUFR
(Binary Universal Form for Representation meteorological data),
полученных на основе изученной информации о погоде, для последующей обработки и хранения.*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include<string.h>
#include<fstream>
#include<cstdio>
#include<locale.h>
#include<vector>
#include<cmath>
#include"tables.h"
#include <QFileDialog>
#include <fileapi.h>

using namespace std;

char symb = 0;                              //Временный символ
unsigned int byte = 0;                      //Номер байта
unsigned int bit = 0;                       //Номер бита
string text = "CCITTIA5                ";   //Проверка дескриптора на текст
int sum = 0;
string B;                                   //Кодовая таблица B
string D;                                   //Кодовая таблица D
string buf;                                 //Строка с сообщением
ofstream output;                            //Файл с расшифрованным сообщением

class BUFR                                  //Класс BUFR
{

private:
    struct descriptor                       //Структура дескриптора
    {
        unsigned short F = 0;
        unsigned short X = 0;
        unsigned short Y = 0;
    };

    int section_0_start;                    //Начало 0 раздела
    int message_length;                     //Общая длина сообщения BUFR
    int BUFR_version;                       //Номер издания BUFR (3 или 4)

    int section_1_start;                    //Начало 1 раздела
    int section_1_length;                   //Длина 1 раздела
    int e_table;                            //Эталонная таблица кода BUFR
    int center_ident;                       //Идентификация центра — поставщика/производителя продукции
    int subcenter_ident;                    //Идентификация подцентра — поставщика/производителя продукции
    int update_number;                      //Последовательный номер обновления
    bool optional_section;                  //Необязательный раздел
    int data_category;                      //Категория данных
    int data_subcategory;                   //Международная подкатегория данных
    int local_data_subcategory;             //Локальная подкатегория данных
    int e_table_version;                    //Номер версии эталонной таблицы
    int local_table_version;                //Номер версии местных таблиц, применяемых для расширения используемых эталонных таблиц
    int year;                               //Год
    int month;                              //Месяц
    int day;                                //День
    int hour;                               //Час
    int minute;                             //Минута
    int second;                             //Секунда

    int section_2_start;                    //Начало 2 раздела
    int section_2_length;                   //Длина 2 раздела

    int section_3_start;                    //Начало 3 раздела
    int section_3_length;                   //Длина 3 раздела
    int subset_quantity;                    //Кол-во поднаборов данных
    bool data_type = 0;                     //Тип данных
    bool compression = 0;                   //Сжатый/не сжатый 4-й раздел

    int section_4_start;                    //Начало 4 раздела
    int section_4_length;                   //Длина 4 раздела

    int section_5_start;                    //Начало 5 раздела

public:

    void set_0_start(int i)                 //Определение начала сообщения
    {
        section_0_start = i;
    }
    void set_0_length()                     //Определение длины сообщения
    {
        unsigned char a, b, c;
        int i = 0;

        a = buf[section_0_start + 4];
        b = buf[section_0_start + 5];
        c = buf[section_0_start + 6];

        i = (((a << 8) | b) << 8) | c;

        message_length = i;
    }
    int get_length()                        //Возвращение длины сообщения
    {
        return message_length;
    }
    void set_BUFR_version()                 //Определения версии сообщения
    {
        BUFR_version = int(buf[section_0_start + 7]);
    }
    void section_0_output()                 //Вывод первого раздела в консоль
    {
        cout << "\nBUFR " << endl << "Версия: " << BUFR_version << endl;
        cout << "Длина сообщения: " << message_length << endl;
    }
    int get_version()                       //Возвращение версии сообщения
    {
        return BUFR_version;
    }
    void set_1_start()                      //Определение начала 1 раздела
    {
        section_1_start = section_0_start + 8;
    }
    void set_1_length()                     //Определение длины 1 раздела
    {
        unsigned char a, b, c;
        int i = 0;

        a = buf[section_1_start];
        b = buf[section_1_start + 1];
        c = buf[section_1_start + 2];

        i = (((a << 8) | b) << 8) | c;

        section_1_length = i;
    }
    void set_e_table()                      //Определение эталонных таблиц
    {
        e_table = buf[section_1_start + 3];
    }
    void set_center_ident()                 //Определение центра
    {
        unsigned char a, b;
        int i = 0;

        a = buf[section_1_start + 4];
        b = buf[section_1_start + 5];

        i = ((a << 8) | b);

        center_ident = i;
    }
    void set_subcenter_ident()              //Определение подцентра
    {
        unsigned char a, b;
        int i = 0;

        a = buf[section_1_start + 6];
        b = buf[section_1_start + 7];

        i = ((a << 8) | b);

        subcenter_ident = i;
    }
    void set_update_number()                //Определение последовательного номера обновления
    {
        update_number = buf[section_1_start + 8];
    }
    void set_optional_section()             //Определение наличия необязательного раздела
    {
        unsigned char c = buf[section_1_start + 9];
        if ((c >> 7) == 1)
            optional_section = 1;
        else
            if ((c >> 7) == 0)
                optional_section = 0;
    }
    void set_data_category()                //Определение категории данных
    {
        data_category = buf[section_1_start + 10];
    }
    void set_data_subcategory()             //Определение подкатегории данных
    {
        data_subcategory = buf[section_1_start + 11];
    }
    void set_local_data_subcategory()       //Определение локальной подкатегории данных
    {
        local_data_subcategory = buf[section_1_start + 12];
    }
    void set_e_table_version()              //Определение версии эталонных таблиц
    {
        e_table_version = buf[section_1_start + 13];
    }
    void set_local_table_version()          //Определение версии местных таблиц
    {
        local_table_version = buf[section_1_start + 14];
    }
    void set_date_time()                    //Определение даты и времени
    {
        unsigned char a, b;
        int i = 0;

        a = buf[section_1_start + 15];
        b = buf[section_1_start + 16];
        i = ((a << 8) | b);

        year = i;

        month = buf[section_1_start + 17];

        day = buf[section_1_start + 18];

        hour = buf[section_1_start + 19];

        minute = buf[section_1_start + 20];

        second = buf[section_1_start + 21];
    }
    void section_1_output()                 //Вывод первого раздела в консоль
    {
        cout << "Длина секции: " << section_1_length << endl;
        cout << "Номер основной таблицы: " << e_table;
        if (e_table == 0)
            cout << " Метеорология, поддерживаемая Всемирной Метеорологической Организацией (ВМО)";
        if (e_table == 10)
            cout << " Океанография, поддерживаемая Международной океанографической комиссией (МОК)";
        cout << endl;
        center_output(center_ident, subcenter_ident);
        cout << "Последовательный номер обновления: " << update_number << endl;
        cout << "Необязательный раздел: ";
        if (optional_section == 1)
            cout << "есть";
        else cout << "нет";
        cout << endl;
        data_cat_output(data_category, data_subcategory);
        cout << "Локальная подкатегория данных: " << local_data_subcategory << endl;
        cout << "Номер версии основной таблицы: " << e_table_version << endl;
        cout << "Номер версии местной таблицы: " << local_table_version << endl;
        cout << "Дата: " << day << "/" << month << "/" << year << "   Время: " << hour << ":" << month << ":" << second << endl;
    }

    void set_2_start()                      //Определение начала 2 раздела
    {
        section_2_start = section_1_start + section_1_length;
    }

    void set_2_length()                     //Определение длины 2 раздела
    {
        unsigned char a, b, c;
        int i = 0;

        if (optional_section == 1)
        {
            a = buf[section_2_start];
            b = buf[section_2_start + 1];
            c = buf[section_2_start + 2];

            i = (((a << 8) | b) << 8) | c;
        }

        section_2_length = i;
    }

    void section_2_output()                 //Вывод второго раздела в консоль
    {
        cout << "Длина секции: " << section_2_length;
    }

    void set_3_start()                      //Определение начала 3 раздела
    {
        if (optional_section == 1)
            section_3_start = section_2_start + section_2_length;
        else
            section_3_start = section_2_start;
    }

    void set_3_length()                     //Определение длиы 3 раздела
    {
        unsigned char a, b, c;
        int i = 0;

        a = buf[section_3_start];
        b = buf[section_3_start + 1];
        c = buf[section_3_start + 2];

        i = (((a << 8) | b) << 8) | c;

        section_3_length = i;
    }

    void set_subset_quantity()              //Определение кол-ва поднаборов данных
    {
        unsigned char a, b;
        int i = 0;

        a = buf[section_3_start + 4];
        b = buf[section_3_start + 5];

        i = (a << 8) | b;

        subset_quantity = i;
    }

    void set_data_type()                    //Данные наблюдения/Другие данные
    {
        if (buf[section_3_start + 6] &= 0x70)
            data_type = 1;
    }

    void set_compression()                  //Определение сжатия 4-го раздела
    {
        if (buf[section_3_start + 6] &= 0x60)
            compression = 1;
    }

    void section_3_output()                 //Вывод 3-го раздела в консоль
    {
        cout << "Длина секции: " << section_3_length << endl;
        cout << "Кол-во поднаборов данных: " << subset_quantity << endl;
        if (data_type == 1)
            cout << "Друние данные." << endl;
        else
            cout << "Данные наблюдения." << endl;
        if (compression == 1)
            cout << "Сжатые данные." << endl;
        else
            cout << "Данные без сжатия." << endl;
    }

    void set_4_start()                      //Определение начала 4-го раздела
    {
        section_4_start = section_3_start + section_3_length;
    }

    void set_4_length()                     //Определение длины 4-го раздела
    {
        unsigned char a, b, c;
        int i = 0;

        a = buf[section_4_start];
        b = buf[section_4_start + 1];
        c = buf[section_4_start + 2];

        i = (((a << 8) | b) << 8) | c;

        section_4_length = i;
    }

    void section_4_output()                 //Вывод 4-го раздела в консоль
    {
        cout << "Длина секции: " << section_4_length << endl << endl;
    }

    int decoder(unsigned short F, unsigned short X, unsigned short Y)   //Работа с дескриптором
    {
        long long k = 0;
        int i = 0;
        int q = 0;
        int p = 0;

        descriptor* desc = nullptr;

        if (F == 0)
        {
            string find;                                        //Поиск дескриптора в таблицах
            string description, unit;                           //Название элемента, единица измерения
            int scale = 0, referance = 0, bit_length = 0;       //Масштаб, начало отсчёта, длина данных (бит)
            long long long_long_value = 0;                      //Начальное значение
            long double double_value = 0;                       //Вычисленное значение
            unsigned char temp_symb = 0;                        //Временный символ
            string str_value;
            string f = to_string(F), x = to_string(X), y = to_string(Y);

            if (X < 10)
                x = '0' + x;
            if (Y < 10)
                y = '0' + y;
            if (Y < 100)
                y = '0' + y;

            find = f + x + y;
            cout << find << endl;
            //output << find << endl;
            output << f << " " << x << " " << y << endl;

            while (B.substr(k + 1, 6) != find)    //Поиск дескриптора в кодовой таблице B
            {
                while (B[k] != '\n')
                {
                    k++;
                }
                k++;
            }
            /*while (B.substr(k, 6) != find)    //Поиск дескриптора в кодовой таблице B
            {
                ++k;
            }
            k--;*/
            description = B.substr(k + 8, 64);
            unit = B.substr(k + 73, 24);
            scale = stoi(B.substr(k + 98, 3));
            referance = stoi(B.substr(k + 102, 12));
            bit_length = stoi(B.substr(k + 115, 3));
            output << description;
            sum += bit_length;
            if (!strcmp(unit.c_str(), text.c_str()))    //Если единица измерения это МККТТ–МА5, то расшифровывается текст, иначе число
            {
                for (p = 0; p < bit_length/8; p++)
                {
                    for (int j = 1; j <= 8; j++)
                    {
                        if (bit == 8)
                        {
                            ++byte;
                            bit = 0;
                            symb = buf[section_4_start + 4 + byte];
                        }
                        if (symb & (1 << (7 - bit)))
                        {
                            temp_symb |= (1 << (7 - j));
                        }
                        else
                        {
                            temp_symb &= ~(1 << (7 - j));
                        }
                        ++bit;
                    }
                    str_value.push_back(temp_symb);
                    temp_symb = 0;
                }
                output << " " << str_value << endl;
            }
            else
            {
                for (p = 1; p <= bit_length; p++)
                {
                    if (bit == 8)
                    {
                        ++byte;
                        bit = 0;
                        symb = buf[section_4_start + 4 + byte];
                    }
                    if (symb & (1 << (7 - bit)))
                    {
                        long_long_value |= (1 << (bit_length - p));
                    }
                    /*else
                    {
                        long_long_value &= ~(1 << bit_length - p);
                    }*/
                    ++bit;
                }
                double_value = ((pow(10,-scale))*(long_long_value + referance));
                output << " " << double_value << " " << unit << endl;
            }
            return long_long_value;
        }

        if (F == 3)
        {
            string find;
            string f = to_string(F), x = to_string(X), y = to_string(Y);
            int r = 0;

            if (X < 10)
                x = '0' + x;
            if (Y < 10)
                y = '0' + y;
            if (Y < 100)
                y = '0' + y;

            find = f + x + y;
            cout << find << endl;
            //output << find << endl;

            while ((D.substr(k + 1, 6) != find)&&(D[k] != '\0'))    //Поиск элемента в кодовой таблице D
            {
                while (D[k] != '\n')
                {
                    k++;
                }
                k++;
            }
            i = stoi(D.substr(k + 8, 2));
            desc = new descriptor[i];
            for (p = 0; p < i; p++)
            {
                desc[p].F = stoi(D.substr(k + q + 11, 1));
                desc[p].X = stoi(D.substr(k + q + 12, 2));
                desc[p].Y = stoi(D.substr(k + q + 14, 3));
                while (D[k + q] != '\n')
                {
                    q++;
                }
                q++;

            }
            for (p = 0; p < i; p++)
            {
                if (desc[p].F == 1)     //Работа с дескриптором повторения
                {
                    cout << "F = " << desc[p+1].F << " X = " << desc[p+1].X << " Y = " << desc[p+1].Y << endl;
                    if (desc[p].Y == 0)
                    {
                        r = decoder(desc[p + 1].F, desc[p + 1].X, desc[p + 1].Y);
                        for (int j = 0; j < r; j++)
                        {
                            for (k = 0; k < desc[p].X; k++)
                            {
                                decoder(desc[k + p + 2].F, desc[k + p + 2].X, desc[k + p + 2].Y);
                            }
                        }
                        p += desc[p].X + 1;
                    }
                    else
                    {
                        for (int j = 0; j < desc[i].Y; j++)
                            for (p = 0; p < desc[i].X; p++)
                            {
                                decoder(desc[i + p].F, desc[i + p].X, desc[i + p].Y);
                            }
                        p += desc[p].X + 1;
                    }
                }
                else
                    decoder(desc[p].F, desc[p].X, desc[p].Y);
            }
            delete [] desc;
        }
        return 0;
    }

    void content_read()
    {
        descriptor* desc = nullptr;
        unsigned char a;
        int k = 0;
        int i, j, p;
        symb = buf[section_4_start + 4];
        desc = new descriptor[subset_quantity];
        for (i = 0; i < subset_quantity; i++)
        {
            a = buf[section_3_start + 7 + k];
            desc[i].F = (unsigned short)(a >> 6);
            a &= ~(1 << 7);
            a &= ~(1 << 6);
            desc[i].X = (unsigned short)(a);
            a = buf[section_3_start + 7 + k + 1];
            desc[i].Y = (unsigned short)(a);
            cout << "content_read №" << i + 1 <<  ": F = " << desc[i].F << " X = " << desc[i].X << " Y = " << desc[i].Y << endl;
            k += 2;
        }
        for (i = 0; i < subset_quantity; i++)
        {
            if (desc[i].F == 1)     //Работа с дескриптором повторения
            {
                if (desc[i].Y == 0)
                {
                    for (j = 0; j < decoder(desc[i+1].F, desc[i+1].X, desc[i+1].Y); j++)
                        for (p = 0; p < desc[i].X; p++)
                        {
                            decoder(desc[i + p].F, desc[i + p].X, desc[i + p].Y);
                        }
                    i += desc[i].X;
                }
                else
                {
                    for (j = 0; j < desc[i].Y; j++)
                        for (p = 0; p < desc[i].X; p++)
                        {
                            decoder(desc[i+p].F, desc[i+p].X, desc[i+p].Y);
                        }
                    i += desc[i].X;
                }
            }
            else
                decoder(desc[i].F, desc[i].X, desc[i].Y);
            //i++;
        }
        delete [] desc;
    }

    int size()
    {
        return 8 + section_1_length + section_2_length + section_3_length + section_4_length + 4;
    }
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setFixedHeight(360);
    setFixedWidth(640);
    ui->setupUi(this);
}

void MainWindow::handleButton()
 {

 }


MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::on_pushButton_clicked()     //Нажатие кнопки "Выбрать файл"
{
    QFileDialog *dialog = new QFileDialog;
    QString qstr;
    qstr = dialog->getOpenFileName(0);
    string str = qstr.toLocal8Bit().constData();

    if (str.length() == 0) return 1;        //Завершение работы функции, если файл не выбран

    unsigned long long k = 0;
    setlocale(LC_ALL, "RUS");
    int i = 0;
    char c;
    BUFR message;
    ifstream file(str, std::ios::binary);
    ifstream fileB("B.txt");
    ifstream fileD("D.txt");
    output.open("output.txt");

    file.seekg(0, std::ios::end);
    buf.reserve(file.tellg());
    file.seekg(0, std::ios::beg);

    buf.assign((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    while (!fileB.eof())
    {  // прочитали его и заполнили им строку
        fileB.get(c);
        B.push_back(c);
    }

    while (!fileD.eof())
    {  // прочитали его и заполнили им строку
        fileD.get(c);
        D.push_back(c);
    }

    fileB.close();
    fileD.close();
    file.close();

    while (k < buf.length())
    {
        while (!((buf[i + k] == 'B') && (buf[i + k + 1] == 'U') && (buf[i + k + 2] == 'F') && (buf[i + k + 3] == 'R')))
        {
            cout << buf[i + k];
            output << buf[i + k];
            i++;
        }
        cout << endl << "SECTION 0." << endl;

        message.set_0_start(i + k);
        message.set_BUFR_version();
        message.set_0_length();
        message.section_0_output();

        k = k + message.get_length();

        if (message.get_version() == 4)
        {
            cout << endl << "SECTION 1." << endl << endl;

            message.set_1_start();
            message.set_1_length();
            message.set_e_table();
            message.set_center_ident();
            message.set_subcenter_ident();
            message.set_update_number();
            message.set_optional_section();
            message.set_data_category();
            message.set_data_subcategory();
            message.set_local_data_subcategory();
            message.set_e_table_version();
            message.set_local_table_version();
            message.set_date_time();
            message.section_1_output();

            cout << endl << "SECTION 2." << endl << endl;

            message.set_2_start();
            message.set_2_length();
            message.section_2_output();
            cout << endl;

            cout << endl << "SECTION 3." << endl << endl;

            message.set_3_start();
            message.set_3_length();
            message.set_subset_quantity();
            message.set_data_type();
            message.set_compression();
            message.section_3_output();

            cout << endl << "SECTION 4." << endl << endl;

            message.set_4_start();
            message.set_4_length();
            message.section_4_output();

            message.content_read();
            byte = 0;
            bit = 0;
        }
        else
            cout << "Версия " << message.get_version() << " не поддерживается!";
        /*cout << byte << "  bytes" << endl;
        cout << bit << "  bits" << endl;
        output << byte << "  bytes" << endl;
        output << bit << "  bits" << endl;
        output << message.size() << "  size" << endl;
        cout << sum;*/
    }
    output.close();
    return 0;
}
