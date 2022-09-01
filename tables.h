#include<iostream>
#ifndef TABLES_H
#define TABLES_H

using namespace std;

void data_cat_output(int data_category, int data_subcategory)
{
    cout << "Категория данных: ";
    if (data_category == 0)
    {
        cout << "Наземные данные - земля" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 0) cout << "Ежечасные синоптические наблюдения сфиксированных наземных станций (SYNOP)";
        if (data_subcategory == 1) cout << "Промежуточные синоптические наблюде-ния с фиксированных наземных станций (SYNOP)";
        if (data_subcategory == 2) cout << "Основные синоптические наблюдения с фиксированных наземных станций (SYNOP)";
        if (data_subcategory == 3) cout << "Ежечасные синоптические наблюдения c подвижных наземных станций (SYNOP MOBIL)";
        if (data_subcategory == 4) cout << "Промежуточные синоптические наблюдения с подвижных наземных станций (SYNOP MOBIL)";
        if (data_subcategory == 5) cout << "Основные синоптические наблюденияc подвижных наземных станций (SYNOP MOBIL)";
        if (data_subcategory == 6) cout << "Одночасовые наблюдения с автоматических станций";
        if (data_subcategory == 7) cout << "n-минутные наблюдения с АМС";
        if (data_subcategory == 10) cout << "Регулярные авиационные наблюдения (METAR)";
        if (data_subcategory == 11) cout << "Специальные авиационные наблюдения (SPECI)";
        if (data_subcategory == 20) cout << "Климатологические наблюдения (CLIMAT)";
        if (data_subcategory == 30) cout << "Местоположение атмосфериков (SFLOC)";
        if (data_subcategory == 40) cout << "Гидрологические сводки";
        if (data_subcategory == 50) cout << "Ежечасные синоптические наблюдения с дополнительными данными за один час";
        if (data_subcategory == 51) cout << "Промежуточные синоптические наблюдения с дополнительными данными за один час";
        if (data_subcategory == 52) cout << "Основные синоптические наблюдения с дополнительными данными за один час";
    }
    if (data_category == 1)
    {
        cout << "Наземные данные - море" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 0) cout << "Синоптические наблюдения (SHIP)";
        if (data_subcategory == 6) cout << "Одночасовые наблюдения с автоматических станций";
        if (data_subcategory == 7) cout << "n-минутные наблюдения с АМС";
        if (data_subcategory == 20) cout << "Климатологические наблюдения (CLIMAT SHIP)";
        if (data_subcategory == 25) cout << "Наблюдения c буев (BUOY)";
        if (data_subcategory == 30) cout << "Данные мареографов";
        if (data_subcategory == 31) cout << "Временной ряд наблюдаемого уровня воды";
    }
    if (data_category == 2)
    {
        cout << "Вертикальное зондирование (не спутниковое)" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 1) cout << "Сводки данных о ветре на высотах с фиксированных наземных станций (PILOT)";
        if (data_subcategory == 2) cout << "Сводки данных о ветре на высотах с борта судна (PILOT SHIP)";
        if (data_subcategory == 3) cout << "Сводки данных о ветре на высотах с подвижных наземных станций (PILOT MOBIL)";
        if (data_subcategory == 4) cout << "Сводки данных о температуре/влажности/ветре на высотах с фиксированных наземных станций (TEMP)";
        if (data_subcategory == 5) cout << "Сводки данных о температуре/влажности/ветре на высотах с борта судна (TEMP SHIP)";
        if (data_subcategory == 6) cout << "Сводки данных о температуре/влажности/ветре на высотах с подвижных наземных станций (TEMP MOBIL)";
        if (data_subcategory == 7) cout << "Сводки данных о температуре/влажности/ветре на высотах со сбрасываемых зондов (TEMP DROP)";
        if (data_subcategory == 10) cout << "Сводки данных профилометра ветра";
        if (data_subcategory == 11) cout << "Профили температуры РАСС";
        if (data_subcategory == 20) cout << "Профили ASDAR/ACARS (AMДАР)";
        if (data_subcategory == 25) cout << "Климатологические наблюдения с фиксированных наземных станций (CLIMAT TEMP)";
        if (data_subcategory == 26) cout << "Климатологические наблюдения с борта судна (CLIMAT TEMP SHIP)";
    }
    if (data_category == 3)
    {
        cout << "Вертикальное зондирование (спутниковое)" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 0) cout << "Температура (SATEM)";
        if (data_subcategory == 1) cout << "TIROS (TOVS)";
        if (data_subcategory == 2) cout << "ATOVS";
        if (data_subcategory == 3) cout << "AMSU-A";
        if (data_subcategory == 4) cout << "AMSU-B";
        if (data_subcategory == 5) cout << "HIRS";
        if (data_subcategory == 6) cout << "MHS";
        if (data_subcategory == 7) cout << "IASI";
    }
    if (data_category == 4)
    {
        cout << "Данные на простом уровне в атмосфере (не спутниковые)" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 0) cout << "ASDAR/ACARS (AMДАР)";
        if (data_subcategory == 1) cout << "Неавтоматизированные наблюдения (AIREP, PIREP)";
    }
    if (data_category == 5)
    {
        cout << "Данные на простом уровне в атмосфере (спутниковые)" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 0) cout << "Данные об облачности/ветре (SATOB)";
    }
    if (data_category == 6)
    {
        cout << "Данные радара" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 0) cout << "Данные об отражательной способности";
        if (data_subcategory == 1) cout << "Доплеровские профили ветра";
        if (data_subcategory == 2) cout << "Производная продукция";
        if (data_subcategory == 3) cout << "Наземные радиолокационные метеорологические наблюдения (RADOB)";
    }
    if (data_category == 7)
    {
        cout << "Синоптические особенности" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 0) cout << "Прогноз траекторий тропических циклонов с EPS";
        if (data_subcategory == 1) cout << "Линия шквалов";
    }
    if (data_category == 8)
    {
        cout << "Физические/химические компоненты" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 0) cout << "Приземные измерения озона";
        if (data_subcategory == 1) cout << "Вертикальное зондирование озона";
    }
    if (data_category == 9)
    {
        cout << "Распространение и перенос" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 0) cout << "Траектории, анализ или прогноз";
    }
    if (data_category == 10)
    {
        cout << "Радиологические данные" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 1) cout << "Наблюдение (RADREP)";
        if (data_subcategory == 2) cout << "Прогноз (RADOF)";
    }
    if (data_category == 11) cout << "BUFR Таблицы, полная замена или корректировка";
    if (data_category == 12)
    {
        cout << "Наземные данные (спутниковые)" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 0) cout << "ERS-uwa";
        if (data_subcategory == 1) cout << "ERS-uwi";
        if (data_subcategory == 2) cout << "ERS-ura";
        if (data_subcategory == 3) cout << "ERS-uat";
        if (data_subcategory == 4) cout << "Радиометр SSM/I";
        if (data_subcategory == 5) cout << "Quickscat";
        if (data_subcategory == 6) cout << "Приземная температура/радиация (SATOB)";
        if (data_subcategory == 7) cout << "ASCAT";
    }
    if ((13 <= data_category) && (data_category <= 19)) cout << "Резерв";
    if (data_category == 20) cout << "Информация о состоянии";
    if (data_category == 21) cout << "Яркость (измеренная спутником)";
    if ((22 <= data_category) && (data_category <= 30)) cout << "Резерв";
    if (data_category == 31)
    {
        cout << "Океанографические данные" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 0) cout << "Приземные наблюдения";
        if (data_subcategory == 1) cout << "Приземные наблюдения вдоль трассы (TRACKOB)";
        if (data_subcategory == 2) cout << "Наблюдения волнового спектра (WAVEOB)";
        if (data_subcategory == 3) cout << "Батитермические наблюдения (BATHY)";
        if (data_subcategory == 4) cout << "Сообщения с подповерхностных буев (профили)";
        if (data_subcategory == 5) cout << "Профили XBT/XCTD (TESAC)";
        if (data_subcategory == 6) cout << "Сводки данных о волнах";
        if (data_subcategory == 7) cout << "Данные прибора для измерения волн цунами";
    }
    if ((32 <= data_category) && (data_category <= 100)) cout << "Резерв";
    if (data_category == 101)
    {
        cout << "Данные изображения" << endl;
        cout << "Подкатегория данных: ";
        if (data_subcategory == 7) cout << "Данные по СМОС";
    }
    if ((102 <= data_category) && (data_category <= 239)) cout << "Резерв";
    if ((240 <= data_category) && (data_category <= 254)) cout << "Для экспериментального использования";
    if (data_category == 255) cout << "Индикатор для локального использования, с подкатегорией";
    cout << endl;
}



void center_output(int center_ident, int subcenter_ident)
{
    cout << "Центр-поставщик: ";
    if (center_ident == 0) cout << "Секретариат ВМО";
    if (center_ident == 1) cout << "Мельбурн";
    if (center_ident == 2)
    {
        cout << "Мельбурн" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 201) cout << "Касей";
        if (subcenter_ident == 203) cout << "Дейвис";
        if (subcenter_ident == 211) cout << "Мельбурн Криб Поинт 1";
        if (subcenter_ident == 214) cout << "Дарвин";
        if (subcenter_ident == 217) cout << "Перт";
        if (subcenter_ident == 219) cout << "Таунсвилл";
        if (subcenter_ident == 232) cout << "Фиджи";
        if (subcenter_ident == 235) cout << "Нумеа";
        if (subcenter_ident == 237) cout << "Папеэте";
        if (subcenter_ident == 250) cout << "Владивосток";
        if (subcenter_ident == 251) cout << "Гуам";
        if (subcenter_ident == 252) cout << "Гонолулу";
    }
    if (center_ident == 3) cout << ")";
    if (center_ident == 4) cout << "Москва";
    if (center_ident == 5) cout << "Москва";
    if (center_ident == 6) cout << ")";
    if (center_ident == 7)
    {
        cout << "Национальная метеорологическая служба США, национальные центры по прогнозированию окружающей среды (НЦПОС)" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 1) cout << "Проект повторого анализа НЦПОС";
        if (subcenter_ident == 2) cout << "Ансамблевая продукция НЦПОС";
        if (subcenter_ident == 3) cout << "Центральные операции НЦПОС";
        if (subcenter_ident == 4) cout << "Центр моделирования окружающей среды";
        if (subcenter_ident == 5) cout << "Центр гидрометеорологических прогнозов";
        if (subcenter_ident == 6) cout << "Центр морских прогнозов";
        if (subcenter_ident == 7) cout << "Центр климатических прогнозов";
        if (subcenter_ident == 8) cout << "Центр авиационной метеорологии";
        if (subcenter_ident == 9) cout << "Центр прогнозирования штормов";
        if (subcenter_ident == 10) cout << "Национальный центр по ураганам";
        if (subcenter_ident == 11) cout << "Лаборатория методических разработок НМС";
        if (subcenter_ident == 12) cout << "Бюро исследований и применений НЕСДИС";
        if (subcenter_ident == 13) cout << "Федеральное управление гражданской авиации";
        if (subcenter_ident == 14) cout << "Лаборатория метеорологических разработок НМС";
        if (subcenter_ident == 15) cout << "Проект североамериканского регионального повторного анализа";
        if (subcenter_ident == 16) cout << "Центр прогнозирования космической погоды";
    }
    if (center_ident == 8) cout << "Интерфейс телесвязи Национальной метеорологической службы США (NWSTG)";
    if (center_ident == 9) cout << "Национальная метеорологическая служба США — прочее";
    if (center_ident == 10) cout << "Каир (РСМЦ)";
    if (center_ident == 11) cout << ")";
    if (center_ident == 12) cout << "Дакар (РСМЦ)";
    if (center_ident == 13) cout << ")";
    if (center_ident == 14) cout << "Найроби (РСМЦ)";
    if (center_ident == 15) cout << ")";
    if (center_ident == 16) cout << "Касабланка (РСМЦ)";
    if (center_ident == 17) cout << "Тунис (РСМЦ)";
    if (center_ident == 18) cout << "Тунис-Касабланка (РСМЦ)";
    if (center_ident == 19) cout << ")";
    if (center_ident == 20) cout << "Лас-Пальмас";
    if (center_ident == 21) cout << "Алжир (РСМЦ)";
    if (center_ident == 22) cout << "АКМАД";
    if (center_ident == 23) cout << "Мозамбик (НМЦ)";
    if (center_ident == 24) cout << "Претория (РСМЦ)";
    if (center_ident == 25) cout << "Реюньон (РСМЦ)";
    if (center_ident == 26) cout << "Хабаровск (РСМЦ)";
    if (center_ident == 27) cout << ")";
    if (center_ident == 28) cout << "Нью-Дели (РСМЦ)";
    if (center_ident == 29) cout << ")";
    if (center_ident == 30) cout << "Новосибирск (РСМЦ)";
    if (center_ident == 31) cout << ")";
    if (center_ident == 32) cout << "Ташкент (РСМЦ)";
    if (center_ident == 33) cout << "Джидда (РСМЦ)";
    if (center_ident == 34)
    {
        cout << "Токио (РСМЦ),Японское метеорологическое агентство" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 207) cout << "Сиова";
        if (subcenter_ident == 240) cout << "Киёсе";
    }
    if (center_ident == 35) cout << ")";
    if (center_ident == 36) cout << "Бангкок";
    if (center_ident == 37) cout << "Улан-Батор";
    if (center_ident == 38)
    {
        cout << "Пекин (РСМЦ)" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 225) cout << "Пекин";
        if (subcenter_ident == 226) cout << "Гуанчжоу";
        if (subcenter_ident == 228) cout << "Урумчи";
    }
    if (center_ident == 39) cout << ")";
    if (center_ident == 40)
    {
        cout << "Сеул" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 243) cout << "Сеул";
        if (subcenter_ident == 243) cout << "Инчхон";
    }
    if (center_ident == 41) cout << "Буэнос-Айрес (РСМЦ)";
    if (center_ident == 42) cout << ")";
    if (center_ident == 43) cout << "Бразилиа (РСМЦ)";
    if (center_ident == 44) cout << ")";
    if (center_ident == 45) cout << "Сантьяго";
    if (center_ident == 46)
    {
        cout << "Бразильское космическое агентство — ИНПЕ" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 10) cout << "Кашуэйра-Паулиста (ИНПЕ)";
        if (subcenter_ident == 11) cout << "Куяба (ИНПЕ)";
        if (subcenter_ident == 12) cout << "Бразилиа (ИНМЕТ)";
        if (subcenter_ident == 13) cout << "Форталеза (ФУНСЕМЕ)";
        if (subcenter_ident == 14) cout << "Натал (Военно-морской гидрогр. центр)";
        if (subcenter_ident == 15) cout << "Манаус (СИВАМ)";
        if (subcenter_ident == 16) cout << "Натал (ИНПЕ)";
        if (subcenter_ident == 17) cout << "Боа Виста";
        if (subcenter_ident == 18) cout << "Зарезервировано";
        if (subcenter_ident == 19) cout << "Зарезервировано";
        if (subcenter_ident == 20) cout << "Зарезервировано";
    }
    if (center_ident == 47) cout << "Колумбия (НМЦ)";
    if (center_ident == 48) cout << "Эквадор (НМЦ)";
    if (center_ident == 49) cout << "Перу (НМЦ)";
    if (center_ident == 50) cout << "Венесуэла (Боливарианская Республика) (НМЦ)";
    if (center_ident == 51) cout << "Майами (РСМЦ)";
    if (center_ident == 52) cout << "Майами (РСМЦ),Национальный центр по ураганам";
    if (center_ident == 53) cout << "Монреаль (РСМЦ)";
    if (center_ident == 54) cout << ")";
    if (center_ident == 55) cout << "Сан-Франциско";
    if (center_ident == 56) cout << "Центр АРИНК";
    if (center_ident == 57) cout << "Военно-воздушные силы США — Глобальный метеорологический центр ВВС";
    if (center_ident == 58) cout << "Центр Военно-морского флота по численной метеорологии и океанографии,Монтерей,Калифорния,США";
    if (center_ident == 59) cout << "Лаборатория НУОА по прогностическим системам,Боулдер,Колорадо,США";
    if (center_ident == 60) cout << "Национальный центр США по атмосферным исследованиям (НКАР)";
    if (center_ident == 61) cout << "Служба АРГОС— Лэндовер";
    if (center_ident == 62) cout << "Океанографическое бюро ВМФ США";
    if (center_ident == 63) cout << "Международный научно-исследовательский институт климата и общества (ИРИ)";
    if (center_ident == 64) cout << "Гонолулу (РСМЦ)";
    if (center_ident == 65) cout << "Дарвин (РСМЦ)";
    if (center_ident == 66) cout << ")";
    if (center_ident == 67) cout << "Мельбурн (РСМЦ)";
    if (center_ident == 68) cout << "Зарезервировано";
    if (center_ident == 69)
    {
        cout << "Веллингтон (РСМЦ)" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 243) cout << "Келберн";
    }
    if (center_ident == 70) cout << ")";
    if (center_ident == 71) cout << "Нади (РСМЦ)";
    if (center_ident == 72)
    {
        cout << "Сингапур" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 249) cout << "Сингапур";
    }
    if (center_ident == 73) cout << "Малайзия (НМЦ)";
    if (center_ident == 74)
    {
        cout << "Метеорологическое бюро СК — Эксетер (РСМЦ)" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 1) cout << "Шануикский центр по контролю океанической зоны";
        if (subcenter_ident == 2) cout << "Фучино";
        if (subcenter_ident == 3) cout << "Гатино";
        if (subcenter_ident == 4) cout << "Маспаломас";
        if (subcenter_ident == 5) cout << "Центральный комплекс CДЗЗ ЕКА";
        if (subcenter_ident == 6) cout << "Принц Альберт";
        if (subcenter_ident == 7) cout << "Уэст-Фрёйг";
        if (subcenter_ident == 13) cout << "Тромсё";
        if (subcenter_ident == 21) cout << "Итальянское космическое агентство (Италия)";
        if (subcenter_ident == 22) cout << "Национальный центр научных исследований (Франция)";
        if (subcenter_ident == 23) cout << "Центр геоисследований (Германия)";
        if (subcenter_ident == 24) cout << "Геодезическая обсерватория Печни (Чешская Республика)";
        if (subcenter_ident == 25) cout << "Институт космических исследований Каталонии (Испания)";
        if (subcenter_ident == 26) cout << "Швейцарское федеральное бюро топографии";
        if (subcenter_ident == 27) cout << "Скандинавская геодезическая комиссия (Норвегия)";
        if (subcenter_ident == 28) cout << "Скандинавская геодезическая комиссия (Швеция)";
        if (subcenter_ident == 29) cout << "Национальный географический институт (Франция) — Отдел геодезии";
        if (subcenter_ident == 30) cout << "Федеральное управление картографии и геодезии (Германия)";
        if (subcenter_ident == 31) cout << "Институт геодезии и проведения съемок с помощью инженерно-технологических спутников (СК)";
    }
    if (center_ident == 75) cout << ")";
    if (center_ident == 76) cout << "Москва (РСМЦ)";
    if (center_ident == 77) cout << "Зарезервировано";
    if (center_ident == 78) cout << "Оффенбах (РСМЦ)";
    if (center_ident == 79) cout << ")";
    if (center_ident == 80) cout << "Рим (РСМЦ)";
    if (center_ident == 81) cout << ")";
    if (center_ident == 82) cout << "Норчёпинг";
    if (center_ident == 83) cout << ")";
    if (center_ident == 84) cout << "Тулуза (РСМЦ)";
    if (center_ident == 85) cout << "Тулуза (РСМЦ)";
    if (center_ident == 86) cout << "Хельсинки";
    if (center_ident == 87) cout << "Белград";
    if (center_ident == 88) cout << "Осло";
    if (center_ident == 89) cout << "Прага";
    if (center_ident == 90) cout << "Эпископи";
    if (center_ident == 91) cout << "Анкара";
    if (center_ident == 92) cout << "Франкфурт-на-Майне";
    if (center_ident == 93) cout << "Лондон (ВЦЗП)";
    if (center_ident == 94) cout << "Копенгаген";
    if (center_ident == 95) cout << "Рота";
    if (center_ident == 96) cout << "Афины";
    if (center_ident == 97) cout << "Европейское космическое агентство (ЕКА)";
    if (center_ident == 98) cout << "Европейский центр среднесрочных прогнозов погоды (ЕЦСПП) (РСМЦ)";
    if (center_ident == 99) cout << "Де-Бильт";
    if (center_ident == 100) cout << "Браззавиль";
    if (center_ident == 101) cout << "Абиджан";
    if (center_ident == 102) cout << "Ливийская Арабская Джамахирия (НМЦ)";
    if (center_ident == 103) cout << "Мадагаскар (НМЦ)";
    if (center_ident == 104) cout << "Маврикий (НМЦ)";
    if (center_ident == 105) cout << "Нигер (НМЦ)";
    if (center_ident == 106) cout << "Сейшельские Острова (НМЦ)";
    if (center_ident == 107) cout << "Уганда (НМЦ)";
    if (center_ident == 108) cout << "Объединенная Республика Танзания (НМЦ)";
    if (center_ident == 109) cout << "Зимбабве (НМЦ)";
    if (center_ident == 110)
    {
        cout << "Гонконг,Китай" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 229) cout << "Гонконг";
    }
    if (center_ident == 111) cout << "Афганистан (НМЦ)";
    if (center_ident == 112) cout << "Бахрейн (НМЦ)";
    if (center_ident == 113) cout << "Бангладеш (НМЦ)";
    if (center_ident == 114) cout << "Бутан(НМЦ)";
    if (center_ident == 115) cout << "Камбоджа (НМЦ)";
    if (center_ident == 116) cout << "Корейская Народно-Демократическая Республика (НМЦ)";
    if (center_ident == 117) cout << "Исламская Республика Иран (НМЦ)";
    if (center_ident == 118) cout << "Ирак (НМЦ)";
    if (center_ident == 119) cout << "Казахстан (НМЦ)";
    if (center_ident == 120) cout << "Кувейт (НМЦ)";
    if (center_ident == 121) cout << "Кыргызстан (НМЦ)";
    if (center_ident == 122) cout << "Лаосская Народно-Демократическая Республика (НМЦ)";
    if (center_ident == 123) cout << "Макао,Китай";
    if (center_ident == 124) cout << "Мальдивские Острова (НМЦ)";
    if (center_ident == 125) cout << "Мьянма (НМЦ)";
    if (center_ident == 126) cout << "Непал (НМЦ)";
    if (center_ident == 127) cout << "Оман (НМЦ)";
    if (center_ident == 128) cout << "Пакистан (НМЦ)";
    if (center_ident == 129) cout << "Катар (НМЦ)";
    if (center_ident == 130) cout << "Йемен (НМЦ)";
    if (center_ident == 131) cout << "Шри-Ланка (НМЦ)";
    if (center_ident == 132) cout << "Таджикистан (НМЦ)";
    if (center_ident == 133) cout << "Туркменистан (НМЦ)";
    if (center_ident == 134) cout << "Объединенные Арабские Эмираты (НМЦ)";
    if (center_ident == 135) cout << "Узбекистан (НМЦ)";
    if (center_ident == 136) cout << "Вьетнам (НМЦ)";
    if (center_ident == 137) cout << "Зарезервировано";
    if (center_ident == 138) cout << "Зарезервировано";
    if (center_ident == 139) cout << "Зарезервировано";
    if (center_ident == 140) cout << "Боливия (Многонациональное Государство) (НМЦ)";
    if (center_ident == 141) cout << "Гайана (НМЦ)";
    if (center_ident == 142) cout << "Парагвай (НМЦ)";
    if (center_ident == 143) cout << "Суринам (НМЦ)";
    if (center_ident == 144) cout << "Уругвай (НМЦ)";
    if (center_ident == 145) cout << "Французская Гвиана";
    if (center_ident == 146) cout << "Гидрографический центр военно-морских сил Бразилии";
    if (center_ident == 147)
    {
        cout << "Национальная комиссия по космической деятельности (КОНАЕ) — Аргентина" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 10) cout << "Кордоба";
        if (subcenter_ident == 15) cout << "Ушуайя";
        if (subcenter_ident == 20) cout << "Марамбио";
        if (subcenter_ident == 30) cout << "Сантьяго-де-Чили";
        if (subcenter_ident == 40) cout << "Пунта-Аренас";
        if (subcenter_ident == 50) cout << "База Президент Фрей";
        if (subcenter_ident == 60) cout << "Котопакси";
    }
    if (center_ident == 148) cout << "Зарезервировано";
    if (center_ident == 149) cout << "Зарезервировано";
    if (center_ident == 150) cout << "Антигуа и Барбуда (НМЦ)";
    if (center_ident == 151) cout << "Багамские Острова (НМЦ)";
    if (center_ident == 152) cout << "Барбадос (НМЦ)";
    if (center_ident == 153) cout << "Белиз (НМЦ)";
    if (center_ident == 154) cout << "Центр Британских Карибских территорий";
    if (center_ident == 155) cout << "Сан-Хосе";
    if (center_ident == 156) cout << "Куба (НМЦ)";
    if (center_ident == 157) cout << "Доминика (НМЦ)";
    if (center_ident == 158) cout << "Доминиканская Республика (НМЦ)";
    if (center_ident == 159) cout << "Сальвадор (НМЦ)";
    if (center_ident == 160)
    {
        cout << "НУОА/НЕСДИС США" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 10) cout << "Тромсё (Норвегия)";
        if (subcenter_ident == 11) cout << "Мак-Мердо (Антарктида)";
    }
    if (center_ident == 161)
    {
        cout << "Бюро исследований океана и атмосферы НУОА США" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 1) cout << "Лаборатории экологических исследований Великих озер";
        if (subcenter_ident == 2) cout << "Научно-исследовательская лаборатория системы Земля";
    }
    if (center_ident == 162) cout << "Гватемала (НМЦ)";
    if (center_ident == 163) cout << "Гаити (НМЦ)";
    if (center_ident == 164) cout << "Гондурас (НМЦ)";
    if (center_ident == 165) cout << "Ямайка (НМЦ)";
    if (center_ident == 166) cout << "Мехико";
    if (center_ident == 167) cout << "Нидерландские Антильские Острова и Аруба (НМЦ)";
    if (center_ident == 168) cout << "Никарагуа (НМЦ)";
    if (center_ident == 169) cout << "Панама (НМЦ)";
    if (center_ident == 170) cout << "Сент-Люсия (НМЦ)";
    if (center_ident == 171) cout << "Тринидад и Тобаго (НМЦ)";
    if (center_ident == 172) cout << "Французские Департаменты в РА IV";
    if (center_ident == 173)
    {
        cout << "Национальное управление США по аэронавтике и исследованию космического пространства (НАСА)" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 1) cout << "Исследовательский центр имени Эймса";
        if (subcenter_ident == 2) cout << "Центр летных исследований имени Драйдена";
        if (subcenter_ident == 3) cout << "Исследовательский центр имени Глена";
        if (subcenter_ident == 4) cout << "Центр космических полетов имени Годдарда";
        if (subcenter_ident == 5) cout << "Лаборатория по изучению струйных течений";
        if (subcenter_ident == 6) cout << "Космический центр имени Джонсона";
        if (subcenter_ident == 7) cout << "Космический центр имени Кеннеди";
        if (subcenter_ident == 8) cout << "Исследовательский центр имени Ланглея";
        if (subcenter_ident == 9) cout << "Центр космических полетов имени Маршалла";
        if (subcenter_ident == 10) cout << "Космический центр имени Стенниса";
        if (subcenter_ident == 11) cout << "Институт космических исследований имени Годдарда";
        if (subcenter_ident == 12) cout << "Факультет независимой проверки и валидации";
        if (subcenter_ident == 13) cout << "Центр общего обслуживания НАСА";
        if (subcenter_ident == 14) cout << "Космодром Уоллопс";
    }
    if (center_ident == 174) cout << "Комплексное управление научными данными/Служба данных по морской окружающей среде (ИСДМ/МЕДС — Канада)";
    if (center_ident == 175) cout << "Зарезервировано";
    if (center_ident == 176) cout << "Зарезервировано";
    if (center_ident == 177) cout << "Зарезервировано";
    if (center_ident == 178) cout << "Зарезервировано";
    if (center_ident == 179) cout << "Зарезервировано";
    if (center_ident == 180) cout << "Зарезервировано";
    if (center_ident == 181) cout << "Зарезервировано";
    if (center_ident == 182) cout << "Зарезервировано";
    if (center_ident == 183) cout << "Зарезервировано";
    if (center_ident == 184) cout << "Зарезервировано";
    if (center_ident == 185) cout << "Зарезервировано";
    if (center_ident == 186) cout << "Зарезервировано";
    if (center_ident == 187) cout << "Зарезервировано";
    if (center_ident == 188) cout << "Зарезервировано";
    if (center_ident == 189) cout << "Зарезервировано";
    if (center_ident == 190) cout << "Острова Кука (НМЦ)";
    if (center_ident == 191) cout << "Французская Полинезия (НМЦ)";
    if (center_ident == 192) cout << "Тонга (НМЦ)";
    if (center_ident == 193) cout << "Вануату (НМЦ)";
    if (center_ident == 194) cout << "Бруней-Даруссалам (НМЦ)";
    if (center_ident == 195) cout << "Индонезия (НМЦ)";
    if (center_ident == 196) cout << "Кирибати (НМЦ)";
    if (center_ident == 197) cout << "Федеративные Штаты Микронезии (НМЦ)";
    if (center_ident == 198) cout << "Новая Каледония (НМЦ)";
    if (center_ident == 199) cout << "Ниуэ";
    if (center_ident == 200) cout << "Папуа-Новая Гвинея (НМЦ)";
    if (center_ident == 201) cout << "Филиппины (НМЦ)";
    if (center_ident == 202) cout << "Самоа (НМЦ)";
    if (center_ident == 203) cout << "Соломоновы Острова (НМЦ)";
    if (center_ident == 204)
    {
        cout << "Национальный институт водных и атмосферных исследований (NIWA— Новая Зеландия)" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 101) cout << "Маупия";
        if (subcenter_ident == 102) cout << "Лаудер";
    }
    if (center_ident == 205) cout << "Зарезервировано";
    if (center_ident == 206) cout << "Зарезервировано";
    if (center_ident == 207) cout << "Зарезервировано";
    if (center_ident == 208) cout << "Зарезервировано";
    if (center_ident == 209) cout << "Зарезервировано";
    if (center_ident == 210) cout << "Фраскати (ЕКА/ЕСРИН)";
    if (center_ident == 211) cout << "Ланьон";
    if (center_ident == 212) cout << "Лиссабон";
    if (center_ident == 213) cout << "Рейкьявик";
    if (center_ident == 214) cout << "Мадрид";
    if (center_ident == 215) cout << "Цюрих";
    if (center_ident == 216) cout << "Служба АРГОС — Тулуза";
    if (center_ident == 217) cout << "Братислава";
    if (center_ident == 218) cout << "Будапешт";
    if (center_ident == 219) cout << "Любляна";
    if (center_ident == 220) cout << "Варшава";
    if (center_ident == 221) cout << "Загреб";
    if (center_ident == 222) cout << "Албания (НМЦ)";
    if (center_ident == 223) cout << "Армения (НМЦ)";
    if (center_ident == 224) cout << "Австрия (НМЦ)";
    if (center_ident == 225) cout << "Азербайджан (НМЦ)";
    if (center_ident == 226) cout << "Беларусь (НМЦ)";
    if (center_ident == 227) cout << "Бельгия (НМЦ)";
    if (center_ident == 228) cout << "Босния и Герцеговина (НМЦ)";
    if (center_ident == 229) cout << "Болгария (НМЦ)";
    if (center_ident == 230) cout << "Кипр (НМЦ)";
    if (center_ident == 231) cout << "Эстония (НМЦ)";
    if (center_ident == 232) cout << "Грузия (НМЦ)";
    if (center_ident == 233) cout << "Дублин";
    if (center_ident == 234) cout << "Израиль (НМЦ)";
    if (center_ident == 235) cout << "Иордания (НМЦ)";
    if (center_ident == 236) cout << "Латвия (НМЦ)";
    if (center_ident == 237) cout << "Ливан (НМЦ)";
    if (center_ident == 238) cout << "Литва (НМЦ)";
    if (center_ident == 239) cout << "Люксембург";
    if (center_ident == 240) cout << "Мальта (НМЦ)";
    if (center_ident == 241) cout << "Монако";
    if (center_ident == 242) cout << "Румыния";
    if (center_ident == 243) cout << "Сирийская Арабская Республика (НМЦ)";
    if (center_ident == 244) cout << "Бывшая югославская Республика Македония (НМЦ)";
    if (center_ident == 245) cout << "Украина (НМЦ)";
    if (center_ident == 246) cout << "Республика Молдова (НМЦ)";
    if (center_ident == 247) cout << "Оперативная программа для обмена информацией метеорологических радиолокаторов (ОПЕРА) — ЕВМЕТНЕТ";
    if (center_ident == 248) cout << "Зарезервировано";
    if (center_ident == 249) cout << "Зарезервировано";
    if (center_ident == 250) cout << "Зарезервировано";
    if (center_ident == 251) cout << "Зарезервировано";
    if (center_ident == 252) cout << "Зарезервировано";
    if (center_ident == 253) cout << "Зарезервировано";
    if (center_ident == 254)
    {
        cout << "Оперативный центр ЕВМЕТСАТ" << endl;
        cout << "Подцентр: ";
        if (subcenter_ident == 0) cout << "нет";
        if (subcenter_ident == 10) cout << "Тромсё (Норвегия)";
        if (subcenter_ident == 20) cout << "Маспаломас (Испания)";
        if (subcenter_ident == 30) cout << "Кангерлуссуак (Гренландия)";
        if (subcenter_ident == 40) cout << "Эдмонтон (Канада)";
        if (subcenter_ident == 50) cout << "Бедфорд (Канада)";
        if (subcenter_ident == 60) cout << "Гандер (Канада)";
        if (subcenter_ident == 70) cout << "Монтерей (США)";
        if (subcenter_ident == 80) cout << "Остров Уоллопс (США)";
        if (subcenter_ident == 90) cout << "Гилмор Крик (США)";
        if (subcenter_ident == 100) cout << "Афины (Греция)";
        if (subcenter_ident == 120) cout << "Эва-Бич, Гавайи";
        if (subcenter_ident == 130) cout << "Майами, Флорида";
        if (subcenter_ident == 140) cout << "Ланьон (Франция)";
        if (subcenter_ident == 150) cout << "Свальбард (Норвегия)";
        if (subcenter_ident == 170) cout << "Сен-Дени (Реюньон)";
        if (subcenter_ident == 180) cout << "Москва";
        if (subcenter_ident == 190) cout << "Маскат";
        if (subcenter_ident == 200) cout << "Хабаровск";
        if (subcenter_ident == 210) cout << "Новосибирск";
    }
    if (center_ident == 255) cout << "Не использовать";
    if (center_ident == 256) cout << "НМЦ Анголы";
    if (center_ident == 257) cout << "НМЦ Бенина";
    if (center_ident == 258) cout << "Ботсвана (НМЦ)";
    if (center_ident == 259) cout << "Буркина-Фасо (НМЦ)";
    if (center_ident == 260) cout << "Бурунди (НМЦ)";
    if (center_ident == 261) cout << "Камерун (НМЦ)";
    if (center_ident == 262) cout << "Кабо-Верде (НМЦ)";
    if (center_ident == 263) cout << "Центральноафриканская Республика (НМЦ)";
    if (center_ident == 264) cout << "Чад (НМЦ)";
    if (center_ident == 265) cout << "Коморские Острова";
    if (center_ident == 266) cout << "Демократическая Республика Конго (НМЦ)";
    if (center_ident == 267) cout << "Джибути (НМЦ)";
    if (center_ident == 268) cout << "Эритрея (НМЦ)";
    if (center_ident == 269) cout << "Эфиопия (НМЦ)";
    if (center_ident == 270) cout << "Габон (НМЦ)";
    if (center_ident == 271) cout << "Гамбия (НМЦ)";
    if (center_ident == 272) cout << "Гана (НМЦ)";
    if (center_ident == 273) cout << "Гвинея (НМЦ)";
    if (center_ident == 274) cout << "Гвинея-Бисау (НМЦ)";
    if (center_ident == 275) cout << "Лесото (НМЦ)";
    if (center_ident == 276) cout << "Либерия (НМЦ)";
    if (center_ident == 277) cout << "Малави (НМЦ)";
    if (center_ident == 278) cout << "Мали (НМЦ)";
    if (center_ident == 279) cout << "Мавритания (НМЦ)";
    if (center_ident == 280) cout << "Намибия (НМЦ)";
    if (center_ident == 281) cout << "Нигерия (НМЦ)";
    if (center_ident == 282) cout << "Руанда (НМЦ)";
    if (center_ident == 283) cout << "Сан-Томе и Принсипи (НМЦ)";
    if (center_ident == 284) cout << "Сьерра-Леоне (НМЦ)";
    if (center_ident == 285) cout << "Сомали (НМЦ)";
    if (center_ident == 286) cout << "Судан (НМЦ)";
    if (center_ident == 287) cout << "Свазиленд (НМЦ)";
    if (center_ident == 288) cout << "Того (НМЦ)";
    if (center_ident == 289) cout << "Замбия (НМЦ)";
    if (center_ident >= 290) cout << "Зарезервировано";
    cout << endl;
}

#endif // TABLES_H
