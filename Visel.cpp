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

    cout << "Игра в 'Виселицу' " << endl;
    int mode;

    cout << " Веберите режим игры! ";
    cout << " Введите: " << endl;
    cout << " 1 - компьютер загадывает слово " << endl;
    cout << " 2 - другой человек отгадывает слово " << endl;
    while (true) { // проверка корректности ввода
        cin >> mode;

        if (cin.fail() || (mode != 1 && mode != 2)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Введено неверное число! Пожалуйста, введите 1 или 2: ";
        }
        else {
            break; // Ввод корректен, выходим из цикла
        }
    }

    if (mode == 2) IgraIgrok();
    if (mode == 1) IgraKomp();
        return 0;
    }
