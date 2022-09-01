#include<iostream>
#ifndef TABLES_H
#define TABLES_H

using namespace std;

void data_cat_output(int data_category, int data_subcategory)
{
    cout << "��������� ������: ";
    if (data_category == 0)
    {
        cout << "�������� ������ - �����" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 0) cout << "��������� ������������� ���������� �������������� �������� ������� (SYNOP)";
        if (data_subcategory == 1) cout << "������������� ������������� �������-��� � ������������� �������� ������� (SYNOP)";
        if (data_subcategory == 2) cout << "�������� ������������� ���������� � ������������� �������� ������� (SYNOP)";
        if (data_subcategory == 3) cout << "��������� ������������� ���������� c ��������� �������� ������� (SYNOP MOBIL)";
        if (data_subcategory == 4) cout << "������������� ������������� ���������� � ��������� �������� ������� (SYNOP MOBIL)";
        if (data_subcategory == 5) cout << "�������� ������������� ����������c ��������� �������� ������� (SYNOP MOBIL)";
        if (data_subcategory == 6) cout << "����������� ���������� � �������������� �������";
        if (data_subcategory == 7) cout << "n-�������� ���������� � ���";
        if (data_subcategory == 10) cout << "���������� ����������� ���������� (METAR)";
        if (data_subcategory == 11) cout << "����������� ����������� ���������� (SPECI)";
        if (data_subcategory == 20) cout << "����������������� ���������� (CLIMAT)";
        if (data_subcategory == 30) cout << "�������������� ������������ (SFLOC)";
        if (data_subcategory == 40) cout << "��������������� ������";
        if (data_subcategory == 50) cout << "��������� ������������� ���������� � ��������������� ������� �� ���� ���";
        if (data_subcategory == 51) cout << "������������� ������������� ���������� � ��������������� ������� �� ���� ���";
        if (data_subcategory == 52) cout << "�������� ������������� ���������� � ��������������� ������� �� ���� ���";
    }
    if (data_category == 1)
    {
        cout << "�������� ������ - ����" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 0) cout << "������������� ���������� (SHIP)";
        if (data_subcategory == 6) cout << "����������� ���������� � �������������� �������";
        if (data_subcategory == 7) cout << "n-�������� ���������� � ���";
        if (data_subcategory == 20) cout << "����������������� ���������� (CLIMAT SHIP)";
        if (data_subcategory == 25) cout << "���������� c ���� (BUOY)";
        if (data_subcategory == 30) cout << "������ �����������";
        if (data_subcategory == 31) cout << "��������� ��� ������������ ������ ����";
    }
    if (data_category == 2)
    {
        cout << "������������ ������������ (�� �����������)" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 1) cout << "������ ������ � ����� �� ������� � ������������� �������� ������� (PILOT)";
        if (data_subcategory == 2) cout << "������ ������ � ����� �� ������� � ����� ����� (PILOT SHIP)";
        if (data_subcategory == 3) cout << "������ ������ � ����� �� ������� � ��������� �������� ������� (PILOT MOBIL)";
        if (data_subcategory == 4) cout << "������ ������ � �����������/���������/����� �� ������� � ������������� �������� ������� (TEMP)";
        if (data_subcategory == 5) cout << "������ ������ � �����������/���������/����� �� ������� � ����� ����� (TEMP SHIP)";
        if (data_subcategory == 6) cout << "������ ������ � �����������/���������/����� �� ������� � ��������� �������� ������� (TEMP MOBIL)";
        if (data_subcategory == 7) cout << "������ ������ � �����������/���������/����� �� ������� �� ������������ ������ (TEMP DROP)";
        if (data_subcategory == 10) cout << "������ ������ ������������ �����";
        if (data_subcategory == 11) cout << "������� ����������� ����";
        if (data_subcategory == 20) cout << "������� ASDAR/ACARS (AM���)";
        if (data_subcategory == 25) cout << "����������������� ���������� � ������������� �������� ������� (CLIMAT TEMP)";
        if (data_subcategory == 26) cout << "����������������� ���������� � ����� ����� (CLIMAT TEMP SHIP)";
    }
    if (data_category == 3)
    {
        cout << "������������ ������������ (�����������)" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 0) cout << "����������� (SATEM)";
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
        cout << "������ �� ������� ������ � ��������� (�� �����������)" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 0) cout << "ASDAR/ACARS (AM���)";
        if (data_subcategory == 1) cout << "�������������������� ���������� (AIREP, PIREP)";
    }
    if (data_category == 5)
    {
        cout << "������ �� ������� ������ � ��������� (�����������)" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 0) cout << "������ �� ����������/����� (SATOB)";
    }
    if (data_category == 6)
    {
        cout << "������ ������" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 0) cout << "������ �� ������������� �����������";
        if (data_subcategory == 1) cout << "������������ ������� �����";
        if (data_subcategory == 2) cout << "����������� ���������";
        if (data_subcategory == 3) cout << "�������� ���������������� ����������������� ���������� (RADOB)";
    }
    if (data_category == 7)
    {
        cout << "������������� �����������" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 0) cout << "������� ���������� ����������� �������� � EPS";
        if (data_subcategory == 1) cout << "����� �������";
    }
    if (data_category == 8)
    {
        cout << "����������/���������� ����������" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 0) cout << "��������� ��������� �����";
        if (data_subcategory == 1) cout << "������������ ������������ �����";
    }
    if (data_category == 9)
    {
        cout << "��������������� � �������" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 0) cout << "����������, ������ ��� �������";
    }
    if (data_category == 10)
    {
        cout << "��������������� ������" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 1) cout << "���������� (RADREP)";
        if (data_subcategory == 2) cout << "������� (RADOF)";
    }
    if (data_category == 11) cout << "BUFR �������, ������ ������ ��� �������������";
    if (data_category == 12)
    {
        cout << "�������� ������ (�����������)" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 0) cout << "ERS-uwa";
        if (data_subcategory == 1) cout << "ERS-uwi";
        if (data_subcategory == 2) cout << "ERS-ura";
        if (data_subcategory == 3) cout << "ERS-uat";
        if (data_subcategory == 4) cout << "��������� SSM/I";
        if (data_subcategory == 5) cout << "Quickscat";
        if (data_subcategory == 6) cout << "��������� �����������/�������� (SATOB)";
        if (data_subcategory == 7) cout << "ASCAT";
    }
    if ((13 <= data_category) && (data_category <= 19)) cout << "������";
    if (data_category == 20) cout << "���������� � ���������";
    if (data_category == 21) cout << "������� (���������� ���������)";
    if ((22 <= data_category) && (data_category <= 30)) cout << "������";
    if (data_category == 31)
    {
        cout << "����������������� ������" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 0) cout << "��������� ����������";
        if (data_subcategory == 1) cout << "��������� ���������� ����� ������ (TRACKOB)";
        if (data_subcategory == 2) cout << "���������� ��������� ������� (WAVEOB)";
        if (data_subcategory == 3) cout << "��������������� ���������� (BATHY)";
        if (data_subcategory == 4) cout << "��������� � ���������������� ���� (�������)";
        if (data_subcategory == 5) cout << "������� XBT/XCTD (TESAC)";
        if (data_subcategory == 6) cout << "������ ������ � ������";
        if (data_subcategory == 7) cout << "������ ������� ��� ��������� ���� ������";
    }
    if ((32 <= data_category) && (data_category <= 100)) cout << "������";
    if (data_category == 101)
    {
        cout << "������ �����������" << endl;
        cout << "������������ ������: ";
        if (data_subcategory == 7) cout << "������ �� ����";
    }
    if ((102 <= data_category) && (data_category <= 239)) cout << "������";
    if ((240 <= data_category) && (data_category <= 254)) cout << "��� ������������������ �������������";
    if (data_category == 255) cout << "��������� ��� ���������� �������������, � �������������";
    cout << endl;
}



void center_output(int center_ident, int subcenter_ident)
{
    cout << "�����-���������: ";
    if (center_ident == 0) cout << "����������� ���";
    if (center_ident == 1) cout << "��������";
    if (center_ident == 2)
    {
        cout << "��������" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 201) cout << "�����";
        if (subcenter_ident == 203) cout << "������";
        if (subcenter_ident == 211) cout << "�������� ���� ����� 1";
        if (subcenter_ident == 214) cout << "������";
        if (subcenter_ident == 217) cout << "����";
        if (subcenter_ident == 219) cout << "���������";
        if (subcenter_ident == 232) cout << "�����";
        if (subcenter_ident == 235) cout << "�����";
        if (subcenter_ident == 237) cout << "�������";
        if (subcenter_ident == 250) cout << "�����������";
        if (subcenter_ident == 251) cout << "����";
        if (subcenter_ident == 252) cout << "��������";
    }
    if (center_ident == 3) cout << ")";
    if (center_ident == 4) cout << "������";
    if (center_ident == 5) cout << "������";
    if (center_ident == 6) cout << ")";
    if (center_ident == 7)
    {
        cout << "������������ ����������������� ������ ���, ������������ ������ �� ��������������� ���������� ����� (�����)" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 1) cout << "������ ��������� ������� �����";
        if (subcenter_ident == 2) cout << "����������� ��������� �����";
        if (subcenter_ident == 3) cout << "����������� �������� �����";
        if (subcenter_ident == 4) cout << "����� ������������� ���������� �����";
        if (subcenter_ident == 5) cout << "����� ���������������������� ���������";
        if (subcenter_ident == 6) cout << "����� ������� ���������";
        if (subcenter_ident == 7) cout << "����� ������������� ���������";
        if (subcenter_ident == 8) cout << "����� ����������� ������������";
        if (subcenter_ident == 9) cout << "����� ��������������� �������";
        if (subcenter_ident == 10) cout << "������������ ����� �� ��������";
        if (subcenter_ident == 11) cout << "����������� ������������ ���������� ���";
        if (subcenter_ident == 12) cout << "���� ������������ � ���������� ������";
        if (subcenter_ident == 13) cout << "����������� ���������� ����������� �������";
        if (subcenter_ident == 14) cout << "����������� ����������������� ���������� ���";
        if (subcenter_ident == 15) cout << "������ ������������������� ������������� ���������� �������";
        if (subcenter_ident == 16) cout << "����� ��������������� ����������� ������";
    }
    if (center_ident == 8) cout << "��������� ��������� ������������ ����������������� ������ ��� (NWSTG)";
    if (center_ident == 9) cout << "������������ ����������������� ������ ��� � ������";
    if (center_ident == 10) cout << "���� (����)";
    if (center_ident == 11) cout << ")";
    if (center_ident == 12) cout << "����� (����)";
    if (center_ident == 13) cout << ")";
    if (center_ident == 14) cout << "������� (����)";
    if (center_ident == 15) cout << ")";
    if (center_ident == 16) cout << "���������� (����)";
    if (center_ident == 17) cout << "����� (����)";
    if (center_ident == 18) cout << "�����-���������� (����)";
    if (center_ident == 19) cout << ")";
    if (center_ident == 20) cout << "���-�������";
    if (center_ident == 21) cout << "����� (����)";
    if (center_ident == 22) cout << "�����";
    if (center_ident == 23) cout << "�������� (���)";
    if (center_ident == 24) cout << "�������� (����)";
    if (center_ident == 25) cout << "������� (����)";
    if (center_ident == 26) cout << "��������� (����)";
    if (center_ident == 27) cout << ")";
    if (center_ident == 28) cout << "���-���� (����)";
    if (center_ident == 29) cout << ")";
    if (center_ident == 30) cout << "����������� (����)";
    if (center_ident == 31) cout << ")";
    if (center_ident == 32) cout << "������� (����)";
    if (center_ident == 33) cout << "������ (����)";
    if (center_ident == 34)
    {
        cout << "����� (����),�������� ����������������� ���������" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 207) cout << "�����";
        if (subcenter_ident == 240) cout << "����";
    }
    if (center_ident == 35) cout << ")";
    if (center_ident == 36) cout << "�������";
    if (center_ident == 37) cout << "����-�����";
    if (center_ident == 38)
    {
        cout << "����� (����)" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 225) cout << "�����";
        if (subcenter_ident == 226) cout << "��������";
        if (subcenter_ident == 228) cout << "������";
    }
    if (center_ident == 39) cout << ")";
    if (center_ident == 40)
    {
        cout << "����" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 243) cout << "����";
        if (subcenter_ident == 243) cout << "������";
    }
    if (center_ident == 41) cout << "������-����� (����)";
    if (center_ident == 42) cout << ")";
    if (center_ident == 43) cout << "�������� (����)";
    if (center_ident == 44) cout << ")";
    if (center_ident == 45) cout << "��������";
    if (center_ident == 46)
    {
        cout << "����������� ����������� ��������� � ����" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 10) cout << "��������-�������� (����)";
        if (subcenter_ident == 11) cout << "����� (����)";
        if (subcenter_ident == 12) cout << "�������� (�����)";
        if (subcenter_ident == 13) cout << "��������� (�������)";
        if (subcenter_ident == 14) cout << "����� (������-������� �������. �����)";
        if (subcenter_ident == 15) cout << "������ (�����)";
        if (subcenter_ident == 16) cout << "����� (����)";
        if (subcenter_ident == 17) cout << "��� �����";
        if (subcenter_ident == 18) cout << "���������������";
        if (subcenter_ident == 19) cout << "���������������";
        if (subcenter_ident == 20) cout << "���������������";
    }
    if (center_ident == 47) cout << "�������� (���)";
    if (center_ident == 48) cout << "������� (���)";
    if (center_ident == 49) cout << "���� (���)";
    if (center_ident == 50) cout << "��������� (�������������� ����������) (���)";
    if (center_ident == 51) cout << "������ (����)";
    if (center_ident == 52) cout << "������ (����),������������ ����� �� ��������";
    if (center_ident == 53) cout << "�������� (����)";
    if (center_ident == 54) cout << ")";
    if (center_ident == 55) cout << "���-���������";
    if (center_ident == 56) cout << "����� �����";
    if (center_ident == 57) cout << "������-��������� ���� ��� � ���������� ����������������� ����� ���";
    if (center_ident == 58) cout << "����� ������-�������� ����� �� ��������� ������������ � ������������,��������,����������,���";
    if (center_ident == 59) cout << "����������� ���� �� ��������������� ��������,�������,��������,���";
    if (center_ident == 60) cout << "������������ ����� ��� �� ����������� ������������� (����)";
    if (center_ident == 61) cout << "������ ����ї ��������";
    if (center_ident == 62) cout << "����������������� ���� ��� ���";
    if (center_ident == 63) cout << "������������� ������-����������������� �������� ������� � �������� (���)";
    if (center_ident == 64) cout << "�������� (����)";
    if (center_ident == 65) cout << "������ (����)";
    if (center_ident == 66) cout << ")";
    if (center_ident == 67) cout << "�������� (����)";
    if (center_ident == 68) cout << "���������������";
    if (center_ident == 69)
    {
        cout << "���������� (����)" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 243) cout << "�������";
    }
    if (center_ident == 70) cout << ")";
    if (center_ident == 71) cout << "���� (����)";
    if (center_ident == 72)
    {
        cout << "��������" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 249) cout << "��������";
    }
    if (center_ident == 73) cout << "�������� (���)";
    if (center_ident == 74)
    {
        cout << "����������������� ���� �� � ������� (����)" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 1) cout << "���������� ����� �� �������� ������������ ����";
        if (subcenter_ident == 2) cout << "������";
        if (subcenter_ident == 3) cout << "������";
        if (subcenter_ident == 4) cout << "����������";
        if (subcenter_ident == 5) cout << "����������� �������� C��� ���";
        if (subcenter_ident == 6) cout << "����� �������";
        if (subcenter_ident == 7) cout << "����-����";
        if (subcenter_ident == 13) cout << "�����";
        if (subcenter_ident == 21) cout << "����������� ����������� ��������� (������)";
        if (subcenter_ident == 22) cout << "������������ ����� ������� ������������ (�������)";
        if (subcenter_ident == 23) cout << "����� ��������������� (��������)";
        if (subcenter_ident == 24) cout << "������������� ������������ ����� (������� ����������)";
        if (subcenter_ident == 25) cout << "�������� ����������� ������������ ��������� (�������)";
        if (subcenter_ident == 26) cout << "����������� ����������� ���� ����������";
        if (subcenter_ident == 27) cout << "������������� ������������� �������� (��������)";
        if (subcenter_ident == 28) cout << "������������� ������������� �������� (������)";
        if (subcenter_ident == 29) cout << "������������ �������������� �������� (�������) � ����� ��������";
        if (subcenter_ident == 30) cout << "����������� ���������� ����������� � �������� (��������)";
        if (subcenter_ident == 31) cout << "�������� �������� � ���������� ������ � ������� ���������-��������������� ��������� (��)";
    }
    if (center_ident == 75) cout << ")";
    if (center_ident == 76) cout << "������ (����)";
    if (center_ident == 77) cout << "���������������";
    if (center_ident == 78) cout << "�������� (����)";
    if (center_ident == 79) cout << ")";
    if (center_ident == 80) cout << "��� (����)";
    if (center_ident == 81) cout << ")";
    if (center_ident == 82) cout << "���������";
    if (center_ident == 83) cout << ")";
    if (center_ident == 84) cout << "������ (����)";
    if (center_ident == 85) cout << "������ (����)";
    if (center_ident == 86) cout << "���������";
    if (center_ident == 87) cout << "�������";
    if (center_ident == 88) cout << "����";
    if (center_ident == 89) cout << "�����";
    if (center_ident == 90) cout << "��������";
    if (center_ident == 91) cout << "������";
    if (center_ident == 92) cout << "���������-��-�����";
    if (center_ident == 93) cout << "������ (����)";
    if (center_ident == 94) cout << "����������";
    if (center_ident == 95) cout << "����";
    if (center_ident == 96) cout << "�����";
    if (center_ident == 97) cout << "����������� ����������� ��������� (���)";
    if (center_ident == 98) cout << "����������� ����� ������������� ��������� ������ (�����) (����)";
    if (center_ident == 99) cout << "��-�����";
    if (center_ident == 100) cout << "����������";
    if (center_ident == 101) cout << "�������";
    if (center_ident == 102) cout << "��������� �������� ���������� (���)";
    if (center_ident == 103) cout << "���������� (���)";
    if (center_ident == 104) cout << "�������� (���)";
    if (center_ident == 105) cout << "����� (���)";
    if (center_ident == 106) cout << "����������� ������� (���)";
    if (center_ident == 107) cout << "������ (���)";
    if (center_ident == 108) cout << "������������ ���������� �������� (���)";
    if (center_ident == 109) cout << "�������� (���)";
    if (center_ident == 110)
    {
        cout << "�������,�����" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 229) cout << "�������";
    }
    if (center_ident == 111) cout << "���������� (���)";
    if (center_ident == 112) cout << "������� (���)";
    if (center_ident == 113) cout << "��������� (���)";
    if (center_ident == 114) cout << "�����(���)";
    if (center_ident == 115) cout << "�������� (���)";
    if (center_ident == 116) cout << "��������� �������-��������������� ���������� (���)";
    if (center_ident == 117) cout << "��������� ���������� ���� (���)";
    if (center_ident == 118) cout << "���� (���)";
    if (center_ident == 119) cout << "��������� (���)";
    if (center_ident == 120) cout << "������ (���)";
    if (center_ident == 121) cout << "���������� (���)";
    if (center_ident == 122) cout << "�������� �������-��������������� ���������� (���)";
    if (center_ident == 123) cout << "�����,�����";
    if (center_ident == 124) cout << "����������� ������� (���)";
    if (center_ident == 125) cout << "������ (���)";
    if (center_ident == 126) cout << "����� (���)";
    if (center_ident == 127) cout << "���� (���)";
    if (center_ident == 128) cout << "�������� (���)";
    if (center_ident == 129) cout << "����� (���)";
    if (center_ident == 130) cout << "����� (���)";
    if (center_ident == 131) cout << "���-����� (���)";
    if (center_ident == 132) cout << "����������� (���)";
    if (center_ident == 133) cout << "������������ (���)";
    if (center_ident == 134) cout << "������������ �������� ������� (���)";
    if (center_ident == 135) cout << "���������� (���)";
    if (center_ident == 136) cout << "������� (���)";
    if (center_ident == 137) cout << "���������������";
    if (center_ident == 138) cout << "���������������";
    if (center_ident == 139) cout << "���������������";
    if (center_ident == 140) cout << "������� (����������������� �����������) (���)";
    if (center_ident == 141) cout << "������ (���)";
    if (center_ident == 142) cout << "�������� (���)";
    if (center_ident == 143) cout << "������� (���)";
    if (center_ident == 144) cout << "������� (���)";
    if (center_ident == 145) cout << "����������� ������";
    if (center_ident == 146) cout << "���������������� ����� ������-������� ��� ��������";
    if (center_ident == 147)
    {
        cout << "������������ �������� �� ����������� ������������ (�����) � ���������" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 10) cout << "�������";
        if (subcenter_ident == 15) cout << "������";
        if (subcenter_ident == 20) cout << "��������";
        if (subcenter_ident == 30) cout << "��������-��-����";
        if (subcenter_ident == 40) cout << "�����-������";
        if (subcenter_ident == 50) cout << "���� ��������� ����";
        if (subcenter_ident == 60) cout << "���������";
    }
    if (center_ident == 148) cout << "���������������";
    if (center_ident == 149) cout << "���������������";
    if (center_ident == 150) cout << "������� � ������� (���)";
    if (center_ident == 151) cout << "��������� ������� (���)";
    if (center_ident == 152) cout << "�������� (���)";
    if (center_ident == 153) cout << "����� (���)";
    if (center_ident == 154) cout << "����� ���������� ��������� ����������";
    if (center_ident == 155) cout << "���-����";
    if (center_ident == 156) cout << "���� (���)";
    if (center_ident == 157) cout << "�������� (���)";
    if (center_ident == 158) cout << "������������� ���������� (���)";
    if (center_ident == 159) cout << "��������� (���)";
    if (center_ident == 160)
    {
        cout << "����/������ ���" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 10) cout << "����� (��������)";
        if (subcenter_ident == 11) cout << "���-����� (����������)";
    }
    if (center_ident == 161)
    {
        cout << "���� ������������ ������ � ��������� ���� ���" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 1) cout << "����������� ������������� ������������ ������� ����";
        if (subcenter_ident == 2) cout << "������-����������������� ����������� ������� �����";
    }
    if (center_ident == 162) cout << "��������� (���)";
    if (center_ident == 163) cout << "����� (���)";
    if (center_ident == 164) cout << "�������� (���)";
    if (center_ident == 165) cout << "������ (���)";
    if (center_ident == 166) cout << "������";
    if (center_ident == 167) cout << "������������� ���������� ������� � ����� (���)";
    if (center_ident == 168) cout << "��������� (���)";
    if (center_ident == 169) cout << "������ (���)";
    if (center_ident == 170) cout << "����-����� (���)";
    if (center_ident == 171) cout << "�������� � ������ (���)";
    if (center_ident == 172) cout << "����������� ������������ � �� IV";
    if (center_ident == 173)
    {
        cout << "������������ ���������� ��� �� ����������� � ������������ ������������ ������������ (����)" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 1) cout << "����������������� ����� ����� �����";
        if (subcenter_ident == 2) cout << "����� ������ ������������ ����� ��������";
        if (subcenter_ident == 3) cout << "����������������� ����� ����� �����";
        if (subcenter_ident == 4) cout << "����� ����������� ������� ����� ��������";
        if (subcenter_ident == 5) cout << "����������� �� �������� �������� �������";
        if (subcenter_ident == 6) cout << "����������� ����� ����� ��������";
        if (subcenter_ident == 7) cout << "����������� ����� ����� �������";
        if (subcenter_ident == 8) cout << "����������������� ����� ����� �������";
        if (subcenter_ident == 9) cout << "����� ����������� ������� ����� ��������";
        if (subcenter_ident == 10) cout << "����������� ����� ����� ��������";
        if (subcenter_ident == 11) cout << "�������� ����������� ������������ ����� ��������";
        if (subcenter_ident == 12) cout << "��������� ����������� �������� � ���������";
        if (subcenter_ident == 13) cout << "����� ������ ������������ ����";
        if (subcenter_ident == 14) cout << "��������� �������";
    }
    if (center_ident == 174) cout << "����������� ���������� �������� �������/������ ������ �� ������� ���������� ����� (����/���� � ������)";
    if (center_ident == 175) cout << "���������������";
    if (center_ident == 176) cout << "���������������";
    if (center_ident == 177) cout << "���������������";
    if (center_ident == 178) cout << "���������������";
    if (center_ident == 179) cout << "���������������";
    if (center_ident == 180) cout << "���������������";
    if (center_ident == 181) cout << "���������������";
    if (center_ident == 182) cout << "���������������";
    if (center_ident == 183) cout << "���������������";
    if (center_ident == 184) cout << "���������������";
    if (center_ident == 185) cout << "���������������";
    if (center_ident == 186) cout << "���������������";
    if (center_ident == 187) cout << "���������������";
    if (center_ident == 188) cout << "���������������";
    if (center_ident == 189) cout << "���������������";
    if (center_ident == 190) cout << "������� ���� (���)";
    if (center_ident == 191) cout << "����������� ��������� (���)";
    if (center_ident == 192) cout << "����� (���)";
    if (center_ident == 193) cout << "������� (���)";
    if (center_ident == 194) cout << "������-���������� (���)";
    if (center_ident == 195) cout << "��������� (���)";
    if (center_ident == 196) cout << "�������� (���)";
    if (center_ident == 197) cout << "������������ ����� ���������� (���)";
    if (center_ident == 198) cout << "����� ��������� (���)";
    if (center_ident == 199) cout << "����";
    if (center_ident == 200) cout << "�����-����� ������ (���)";
    if (center_ident == 201) cout << "��������� (���)";
    if (center_ident == 202) cout << "����� (���)";
    if (center_ident == 203) cout << "���������� ������� (���)";
    if (center_ident == 204)
    {
        cout << "������������ �������� ������ � ����������� ������������ (NIWA� ����� ��������)" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 101) cout << "������";
        if (subcenter_ident == 102) cout << "������";
    }
    if (center_ident == 205) cout << "���������������";
    if (center_ident == 206) cout << "���������������";
    if (center_ident == 207) cout << "���������������";
    if (center_ident == 208) cout << "���������������";
    if (center_ident == 209) cout << "���������������";
    if (center_ident == 210) cout << "�������� (���/�����)";
    if (center_ident == 211) cout << "������";
    if (center_ident == 212) cout << "��������";
    if (center_ident == 213) cout << "���������";
    if (center_ident == 214) cout << "������";
    if (center_ident == 215) cout << "�����";
    if (center_ident == 216) cout << "������ ����� � ������";
    if (center_ident == 217) cout << "����������";
    if (center_ident == 218) cout << "��������";
    if (center_ident == 219) cout << "�������";
    if (center_ident == 220) cout << "�������";
    if (center_ident == 221) cout << "������";
    if (center_ident == 222) cout << "������� (���)";
    if (center_ident == 223) cout << "������� (���)";
    if (center_ident == 224) cout << "������� (���)";
    if (center_ident == 225) cout << "����������� (���)";
    if (center_ident == 226) cout << "�������� (���)";
    if (center_ident == 227) cout << "������� (���)";
    if (center_ident == 228) cout << "������ � ����������� (���)";
    if (center_ident == 229) cout << "�������� (���)";
    if (center_ident == 230) cout << "���� (���)";
    if (center_ident == 231) cout << "������� (���)";
    if (center_ident == 232) cout << "������ (���)";
    if (center_ident == 233) cout << "������";
    if (center_ident == 234) cout << "������� (���)";
    if (center_ident == 235) cout << "�������� (���)";
    if (center_ident == 236) cout << "������ (���)";
    if (center_ident == 237) cout << "����� (���)";
    if (center_ident == 238) cout << "����� (���)";
    if (center_ident == 239) cout << "����������";
    if (center_ident == 240) cout << "������ (���)";
    if (center_ident == 241) cout << "������";
    if (center_ident == 242) cout << "�������";
    if (center_ident == 243) cout << "��������� �������� ���������� (���)";
    if (center_ident == 244) cout << "������ ����������� ���������� ��������� (���)";
    if (center_ident == 245) cout << "������� (���)";
    if (center_ident == 246) cout << "���������� ������� (���)";
    if (center_ident == 247) cout << "����������� ��������� ��� ������ ����������� ����������������� �������������� (�����) � ��������";
    if (center_ident == 248) cout << "���������������";
    if (center_ident == 249) cout << "���������������";
    if (center_ident == 250) cout << "���������������";
    if (center_ident == 251) cout << "���������������";
    if (center_ident == 252) cout << "���������������";
    if (center_ident == 253) cout << "���������������";
    if (center_ident == 254)
    {
        cout << "����������� ����� ��������" << endl;
        cout << "��������: ";
        if (subcenter_ident == 0) cout << "���";
        if (subcenter_ident == 10) cout << "����� (��������)";
        if (subcenter_ident == 20) cout << "���������� (�������)";
        if (subcenter_ident == 30) cout << "������������� (����������)";
        if (subcenter_ident == 40) cout << "�������� (������)";
        if (subcenter_ident == 50) cout << "������� (������)";
        if (subcenter_ident == 60) cout << "������ (������)";
        if (subcenter_ident == 70) cout << "�������� (���)";
        if (subcenter_ident == 80) cout << "������ ������� (���)";
        if (subcenter_ident == 90) cout << "������ ���� (���)";
        if (subcenter_ident == 100) cout << "����� (������)";
        if (subcenter_ident == 120) cout << "���-���, ������";
        if (subcenter_ident == 130) cout << "������, �������";
        if (subcenter_ident == 140) cout << "������ (�������)";
        if (subcenter_ident == 150) cout << "��������� (��������)";
        if (subcenter_ident == 170) cout << "���-���� (�������)";
        if (subcenter_ident == 180) cout << "������";
        if (subcenter_ident == 190) cout << "������";
        if (subcenter_ident == 200) cout << "���������";
        if (subcenter_ident == 210) cout << "�����������";
    }
    if (center_ident == 255) cout << "�� ������������";
    if (center_ident == 256) cout << "��� ������";
    if (center_ident == 257) cout << "��� ������";
    if (center_ident == 258) cout << "�������� (���)";
    if (center_ident == 259) cout << "�������-���� (���)";
    if (center_ident == 260) cout << "������� (���)";
    if (center_ident == 261) cout << "������� (���)";
    if (center_ident == 262) cout << "����-����� (���)";
    if (center_ident == 263) cout << "��������������������� ���������� (���)";
    if (center_ident == 264) cout << "��� (���)";
    if (center_ident == 265) cout << "��������� �������";
    if (center_ident == 266) cout << "��������������� ���������� ����� (���)";
    if (center_ident == 267) cout << "������� (���)";
    if (center_ident == 268) cout << "������� (���)";
    if (center_ident == 269) cout << "������� (���)";
    if (center_ident == 270) cout << "����� (���)";
    if (center_ident == 271) cout << "������ (���)";
    if (center_ident == 272) cout << "���� (���)";
    if (center_ident == 273) cout << "������ (���)";
    if (center_ident == 274) cout << "������-����� (���)";
    if (center_ident == 275) cout << "������ (���)";
    if (center_ident == 276) cout << "������� (���)";
    if (center_ident == 277) cout << "������ (���)";
    if (center_ident == 278) cout << "���� (���)";
    if (center_ident == 279) cout << "���������� (���)";
    if (center_ident == 280) cout << "������� (���)";
    if (center_ident == 281) cout << "������� (���)";
    if (center_ident == 282) cout << "������ (���)";
    if (center_ident == 283) cout << "���-���� � �������� (���)";
    if (center_ident == 284) cout << "������-����� (���)";
    if (center_ident == 285) cout << "������ (���)";
    if (center_ident == 286) cout << "����� (���)";
    if (center_ident == 287) cout << "��������� (���)";
    if (center_ident == 288) cout << "���� (���)";
    if (center_ident == 289) cout << "������ (���)";
    if (center_ident >= 290) cout << "���������������";
    cout << endl;
}

#endif // TABLES_H
