#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include "Visel.h"
#include <limits>
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");

    cout << "���� � '��������' " << endl;
    int mode;

    cout << " �������� ����� ����! ";
    cout << " �������: " << endl;
    cout << " 1 - ��������� ���������� ����� " << endl;
    cout << " 2 - ������ ������� ���������� ����� " << endl;
    while (true) { // �������� ������������ �����
        cin >> mode;

        if (cin.fail() || (mode != 1 && mode != 2)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "������� �������� �����! ����������, ������� 1 ��� 2: ";
        }
        else {
            break; // ���� ���������, ������� �� �����
        }
    }

    if (mode == 2) IgraIgrok();
    if (mode == 1) IgraKomp();
        return 0;
    }
