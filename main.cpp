/*���������� ��������� ��� ����������� ��������� BUFR
(Binary Universal Form for Representation meteorological data),
���������� �� ������ ��������� ���������� � ������, ��� ����������� ��������� � ��������.*/
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

