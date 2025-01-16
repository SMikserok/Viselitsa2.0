#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

void Ris1(int& promah) {
     switch (promah) { 
         case 1: {            
             cout <<     "                       *\n"
                         "                       *\n"
                         "                       *\n"
                         "                       *\n"
                         "                       *\n"
                         "                       *\n"
                         "                       *\n"
                         "                       *\n"
                         "                       *\n"
                         "                       *\n"
                         "                       *\n"
                         "************************\n"
                         "*                      *\n";
             break;
         }
         case 2: {
         cout << "         *******************\n"
                 "              |            *\n"
                 "              |            *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "*********************************\n"
                 "*                               *\n";
             break;
         }
         case 3: {
         cout << "         *******************\n"
                 "              |            *\n"
                 "              |            *\n"
                 "              O            *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "*********************************\n"
                 "*                               *\n";
             break;
         }
         case 4: {
         cout << "         *******************\n"
                 "              |            *\n"
                 "              |            *\n"
                 "              O            *\n"
                 "              |            *\n"
                 "              |            *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "*********************************\n"
                 "*                               *\n";
             break;
         }
         case 5: {
         cout << "         *******************\n"
                 "              |            *\n"
                 "              |            *\n"
                 "              O            *\n"
                 "             /|            *\n"
                 "              |            *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "*********************************\n"
                 "*                               *\n";
             break;
         }
         case 6: {
         cout << "         *******************\n"
                 "              |            *\n"
                 "              |            *\n"
                 "              O            *\n"
                 "             /|/           *\n"
                 "              |            *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "*********************************\n"
                 "*                               *\n";
             break;
         }
         case 7: {
         cout << "\n"
                 "         *******************\n"
                 "              |            *\n"
                 "              |            *\n"
                 "              O            *\n"
                 "             /|/           *\n"
                 "              |            *\n"
                 "               /           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "*********************************\n"
                 "*                               *\n";
             break;
         }
         case 8: {
         cout << "\n"
                 "         *******************\n"
                 "              |            *\n"
                 "              |            *\n"
                 "              O            *\n"
                 "             /|/           *\n"
                 "              |            *\n"
                 "             / /           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "                           *\n"
                 "*********************************\n"
                 "*                               *\n";
             break;
         }
     } 
}
void Ris2(int& promah) {
    switch (promah) {
    case 1: {
        cout << "************************\n"
                "*                      *\n";
        break;
    }
    case 2: {
        cout <<     "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "*********************************\n"
                    "*                               *\n";
        break;
    }
    case 3: {
    cout << "         *******************\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 4: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 5: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 6: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "              |            *\n"
            "              |            *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 7: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "             /|            *\n"
            "              |            *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 8: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "             /|/           *\n"
            "              |            *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 9: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "             /|/           *\n"
            "              |            *\n"
            "             /             *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 10: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "             /|/           *\n"
            "              |            *\n"
            "             / /           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    }
}
void Ris3(int& promah) {
    switch (promah) {
    case 1: {
        cout << "*                      *\n";
        break;
    }
    case 2: {
        cout <<   "*********************************\n"
                  "*                               *\n";
        break;
    }
    case 3: {        
        cout <<     "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "                           *\n"
                    "*********************************\n"
                    "*                               *\n";
        break;
    }
    case 4: {
    cout << "         *******************\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 5: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 6: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 7: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "              |            *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 8: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "              |            *\n"
            "              |            *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 9: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "             /|            *\n"
            "              |            *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 10: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "             /|/           *\n"
            "              |            *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 11: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "             /|/           *\n"
            "              |            *\n"
            "               /           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    case 12: {
    cout << "         *******************\n"
            "              |            *\n"
            "              |            *\n"
            "              O            *\n"
            "             /|/           *\n"
            "              |            *\n"
            "             / /           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "                           *\n"
            "*********************************\n"
            "*                               *\n";
        break;
    }
    }
}
bool isOnlyLetters(const string& slovo) {
    string alphabet = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя"; //алфавит для проверки
    for (char c : slovo) {
        if (alphabet.find(c, 0) == -1) {
            return false;
        }
    }
    return true;
}
int IndByk(const string& slovo) { // ФУНКЦИЯ ДЛЯ НАХОЖДЕНИЯ РАЗЛИЧНЫХ БУКВ(НУЖНА ДЛЯ ПОДСЧЕТА КОЛИЧЕСТВА ПОПЫТОК)
    string str2;
    for (char c : slovo) {
        if (str2.find(c, 0) == -1) {
            str2 += c;
        }
    }
    return str2.size();
}
void IgraKomp() {
    string bukvi = ""; 
    string otgad = "_"; // прятать загаданное слово
    int kolpop1, promah = 0;
    string word_list[15] = {"яблоко", "груша", "золото", "дерево", "анлак" , "пгниу", "черешня", "ворона", "дота", "данные", "серегагений", "виселица", "майнкрафт", "книга", "тетрагидроксоалюминат"};
    srand(time(NULL)); // против всевдорандома
    string slovo = word_list[rand() % 15];

    cout << "Компьютер загадал случайное слово! " << endl;
    cout << "Длина загаданного слова = " << slovo.size() << endl;

    int kolpop = IndByk(slovo);
    if (kolpop <= 6) kolpop1 = 8;
    else if (kolpop > 6 && kolpop <= 10) kolpop1 = 10;
    else kolpop1 = 12;
    int zalkop = kolpop1; // для правильного вызова функции с рисованием виселицы
    size_t sizik = slovo.size();
    for (int i = 0; i < sizik - 1; i++)
        otgad += '_';

    while (kolpop1) { // цикл для ввода букв и их отгадывания
        int chet = 0;
        cout << otgad << endl;
        cout << "Осталось попыток = " << kolpop1 << endl;
        string input;
        char c;
        cout << "Введите один символ (букву): ";
        while (true) {
            //проверка на ввод ТОЛЬКО буквы
            cin >> input;

            if (input.length() == 1 && isOnlyLetters(input)) {
                c = input[0];
                break;
            }
            else {
                cout << "Введено неверное значение! Пожалуйста, введите только одну букву: ";
            }
        }
        c = tolower(c);
        if (bukvi.find(c, 0) == -1) { // проверка на повторяющиеся буквы
            for (int i = 0; i < slovo.size(); i++) {
                if (slovo[i] == c) {
                    otgad[i] = c;
                    chet += 1; // играет роль флага
                }
            }
            if (chet == 0) {
                kolpop1--;
                promah++;
                if (zalkop == 8) Ris1(promah); // запуск функций для вывода виселицы
                else if (zalkop == 10) Ris2(promah);
                else Ris3(promah);
            }
            if (otgad.find('_', 0) == -1) break;
            bukvi += c;
        }
        else {
            cout << "Вы уже вводили эту букву, введите другую!" << endl;
        }
    }
    if (kolpop1)
        cout << "Вы отгадали слово:  " << otgad << endl;
    else cout << "Вы проиграли! Кол-во попыток =  " << kolpop1 << ". Загаданное слово - " << slovo;
}

void IgraIgrok() {
    int kolpop1, promah = 0;
    string slovo, otgad = "_";
    string bukvi = "";
    cout << "Загадайте слово! Буквы в одном регистре!" << endl;
    cin.ignore();

    while (true) {
        getline(cin, slovo);

        if (!isOnlyLetters(slovo)) {
            cout << "Слово должно содержать только буквы! Пожалуйста, введите снова: ";
        }
        else {
            break; // Ввод корректен, выходим из цикла
        }
    }
    transform(slovo.begin(), slovo.end(), slovo.begin(), tolower); // делает буквы в одном регистре
    system("cls"); // прятать слово от другога игрока через очищение консоли 
    cout << "Длина загаданного слова = " << slovo.size() << endl;

    int kolpop = IndByk(slovo);
    if (kolpop <= 6) kolpop1 = 8;
    else if (kolpop > 6 && kolpop <= 10) kolpop1 = 10;
    else kolpop1 = 12;
    int zalkop = kolpop1; // для правильного вызова функции с рисованием виселицы


    size_t sizik = slovo.size();
    for (int i = 0; i < sizik - 1; i++)
        otgad += '_';

    while (kolpop1) {
        int chet = 0;
        cout << otgad << endl;
        cout << "Осталось попыток = " << kolpop1 << endl;
        cout << "Введите букву! ";
        string input;
        char c;
        cout << "Введите один символ (букву): ";
        while (true) {
            //проверка на ввод ТОЛЬКО буквы
            cin >> input;

            if (input.length() == 1 && isOnlyLetters(input)) {
                c = input[0];
                break;
            }
            else {
                cout << "Введено неверное значение! Пожалуйста, введите только одну букву: ";
            }
        }
        c = tolower(c);
        if (bukvi.find(c, 0) == -1) {
            for (int i = 0; i < slovo.size(); i++) {
                if (slovo[i] == c) {
                    otgad[i] = c;
                    chet += 1;
                }
            }
            if (chet == 0) {
                kolpop1--;
                promah++;
                if (zalkop == 8) Ris1(promah); // запуск функций для вывода виселицы
                else if (zalkop == 10) Ris2(promah);
                else Ris3(promah);
            }
            if (otgad.find('_', 0) == -1) break;
            bukvi += c;
        }
        else {
            cout << "Вы уже вводили эту букву, введите другую!" << endl;
        }
    }

    if (kolpop1)
        cout << "Вы отгадали слово:  " << otgad << endl;
    else cout << "Вы проиграли! Кол-во попыток = 0. Загаданное слово - " << slovo;
}