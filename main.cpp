/*Прикладная программа для расшифровки сообщений BUFR
(Binary Universal Form for Representation meteorological data),
полученных на основе изученной информации о погоде, для последующей обработки и хранения.*/
#include "mainwindow.h"
#include <QApplication>
#include<iostream>
#include<string.h>
#include<fstream>
#include<string>
#include<cstdio>
#include<locale.h>
#include<cmath>
//#include"tables.h"

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

