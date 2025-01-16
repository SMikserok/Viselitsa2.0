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
    string alphabet = "�����Ũ����������������������������������������������������������"; //������� ��� ��������
    for (char c : slovo) {
        if (alphabet.find(c, 0) == -1) {
            return false;
        }
    }
    return true;
}
int IndByk(const string& slovo) { // ������� ��� ���������� ��������� ����(����� ��� �������� ���������� �������)
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
    string otgad = "_"; // ������� ���������� �����
    int kolpop1, promah = 0;
    string word_list[15] = {"������", "�����", "������", "������", "�����" , "�����", "�������", "������", "����", "������", "�����������", "��������", "���������", "�����", "���������������������"};
    srand(time(NULL)); // ������ �������������
    string slovo = word_list[rand() % 15];

    cout << "��������� ������� ��������� �����! " << endl;
    cout << "����� ����������� ����� = " << slovo.size() << endl;

    int kolpop = IndByk(slovo);
    if (kolpop <= 6) kolpop1 = 8;
    else if (kolpop > 6 && kolpop <= 10) kolpop1 = 10;
    else kolpop1 = 12;
    int zalkop = kolpop1; // ��� ����������� ������ ������� � ���������� ��������
    size_t sizik = slovo.size();
    for (int i = 0; i < sizik - 1; i++)
        otgad += '_';

    while (kolpop1) { // ���� ��� ����� ���� � �� �����������
        int chet = 0;
        cout << otgad << endl;
        cout << "�������� ������� = " << kolpop1 << endl;
        string input;
        char c;
        cout << "������� ���� ������ (�����): ";
        while (true) {
            //�������� �� ���� ������ �����
            cin >> input;

            if (input.length() == 1 && isOnlyLetters(input)) {
                c = input[0];
                break;
            }
            else {
                cout << "������� �������� ��������! ����������, ������� ������ ���� �����: ";
            }
        }
        c = tolower(c);
        if (bukvi.find(c, 0) == -1) { // �������� �� ������������� �����
            for (int i = 0; i < slovo.size(); i++) {
                if (slovo[i] == c) {
                    otgad[i] = c;
                    chet += 1; // ������ ���� �����
                }
            }
            if (chet == 0) {
                kolpop1--;
                promah++;
                if (zalkop == 8) Ris1(promah); // ������ ������� ��� ������ ��������
                else if (zalkop == 10) Ris2(promah);
                else Ris3(promah);
            }
            if (otgad.find('_', 0) == -1) break;
            bukvi += c;
        }
        else {
            cout << "�� ��� ������� ��� �����, ������� ������!" << endl;
        }
    }
    if (kolpop1)
        cout << "�� �������� �����:  " << otgad << endl;
    else cout << "�� ���������! ���-�� ������� =  " << kolpop1 << ". ���������� ����� - " << slovo;
}

void IgraIgrok() {
    int kolpop1, promah = 0;
    string slovo, otgad = "_";
    string bukvi = "";
    cout << "��������� �����! ����� � ����� ��������!" << endl;
    cin.ignore();

    while (true) {
        getline(cin, slovo);

        if (!isOnlyLetters(slovo)) {
            cout << "����� ������ ��������� ������ �����! ����������, ������� �����: ";
        }
        else {
            break; // ���� ���������, ������� �� �����
        }
    }
    transform(slovo.begin(), slovo.end(), slovo.begin(), tolower); // ������ ����� � ����� ��������
    system("cls"); // ������� ����� �� ������� ������ ����� �������� ������� 
    cout << "����� ����������� ����� = " << slovo.size() << endl;

    int kolpop = IndByk(slovo);
    if (kolpop <= 6) kolpop1 = 8;
    else if (kolpop > 6 && kolpop <= 10) kolpop1 = 10;
    else kolpop1 = 12;
    int zalkop = kolpop1; // ��� ����������� ������ ������� � ���������� ��������


    size_t sizik = slovo.size();
    for (int i = 0; i < sizik - 1; i++)
        otgad += '_';

    while (kolpop1) {
        int chet = 0;
        cout << otgad << endl;
        cout << "�������� ������� = " << kolpop1 << endl;
        cout << "������� �����! ";
        string input;
        char c;
        cout << "������� ���� ������ (�����): ";
        while (true) {
            //�������� �� ���� ������ �����
            cin >> input;

            if (input.length() == 1 && isOnlyLetters(input)) {
                c = input[0];
                break;
            }
            else {
                cout << "������� �������� ��������! ����������, ������� ������ ���� �����: ";
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
                if (zalkop == 8) Ris1(promah); // ������ ������� ��� ������ ��������
                else if (zalkop == 10) Ris2(promah);
                else Ris3(promah);
            }
            if (otgad.find('_', 0) == -1) break;
            bukvi += c;
        }
        else {
            cout << "�� ��� ������� ��� �����, ������� ������!" << endl;
        }
    }

    if (kolpop1)
        cout << "�� �������� �����:  " << otgad << endl;
    else cout << "�� ���������! ���-�� ������� = 0. ���������� ����� - " << slovo;
}