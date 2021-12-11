#include <iostream>
#include<cmath>
#include <locale.h>

using namespace std;

void Task_1() {
    int d, m, dd;
    string day[22]{ "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth", "thirtieth", "thirty first"};
    string month[12]{ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    cout << "This program displays the date as text." << endl;
    cout << ("Enter the date:") << endl << "Day = "; cin >> d; cout << "Month = "; cin >> m;
    if ((d < 1) || (d > 31) || (m < 1) || (m > 12)){
        cout << "One of the values is invalid. Try again." << endl;
    }
    else {
        cout << "The ";
        if (d < 21) {
            cout << day[d - 1];
        }
        else if (d < 30) {
            dd = d % 10;
            cout << "twenty " << day[dd - 1];
        }
        else 
            cout << day[d - 10];
        cout << " of ";
        cout << month[m - 1] << endl;

    }
}

void Task_2() {
    char c, r, arr[4]{ 'N', 'E', 'S', 'W' };
    int n, x;
    cout << "This program displays the direction of the robot after executing the received program." << endl;
    cout << ("Enter original direction ('N' - north, 'W' - west, 'S' - south, 'E' - east) and a command (0 - keep moving, 1 - turn left, -1 - turn right):") << endl << "C = "; cin >> c; cout << "N = "; cin >> n;
    if (((n < -1) && (n > 1)) || ((c != 'N') && (c != 'W') && (c != 'S') && (c != 'E'))) {
        cout << "One of the values is invalid. Try again." << endl;
        return;
    }
    else {
        if (n == 0) {
            r = c;
        }
        else {
            for (int i = 0; i < 4; i++) {
                if (arr[i] == c)
                    x = i;
            }
            if (n == 1) {
                x--;
                if (x == -1)
                    x = 3;
            }
            else {
                x++;
                if (x == 4)
                    x = 0;
            }
            r = arr[x];
        }
    }
    cout << "The direction is " << r << endl;
}

void Task_3() {
    setlocale(LC_ALL, "Rus");
    int n;
    string num[31]{ "одно", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять", "Десять", "Одиннадцать", "Двеннадцать", "Триннадцать", "Четырнадцать", "Пятнадцать", "Шестнадцать", "Семнадцать", "Восемнадцать", "Девятнадцать" };
    cout << "An integer in the range of 10–40 is given, which determines the number of educational tasks on a certain topic. This program prints out the description string." << endl;
    cout << ("Enter the value:") << endl << "N = "; cin >> n; 
    if ((n < 10) || (n > 40)) {
        cout << "The value is invalid. Try again." << endl;
        return;
    }
    else {
        if (n > 19) {
            if (n / 10 == 2) {
                cout << "Двадцать";
            }
            else if (n / 10 == 3) {
                cout << "Тридцать";
            }
            else
                cout << "Сорок";
            if (n % 10 != 0)
                cout << " " << num[(n - 1) % 10];
        }
        else {
            cout << num[n - 1];
        }
        if ((n % 10 == 1) && (n > 19)) {
            cout << " учебное задание" << endl;
        }
        else if ((n % 10 > 1) && (n % 10 < 5) && (n > 19)) {
            cout << " учебных задания" << endl;
        }
        else
            cout << " учебных заданий" << endl;
    }
}

void Task_4() {
    setlocale(LC_ALL, "Rus");
    int n, s;
    string hund[9]{ "Сто", "Двести", "Триста", "Четыреста", "Пятьсот", "Шестьсот", "Семьсот", "Восемьсот", "Девятьсяот" };
    string ten[8]{ "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто" };
    string num[9]{ "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
    string spec[10]{ "десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"};
    cout << "An integer in the range 100–999 is given. This program prints out the description string of the number" << endl;
    cout << "Enter the value: " << endl << "N = "; cin >> n;
    if ((n < 100) || (n > 999)) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    else {
        s = (n % 100) / 10;
        cout << hund[(n / 100) - 1];
        if (n % 100 != 0) {
            if (s == 1) {
                cout << " " << spec[n % 10] << endl;
            }
            else if (s == 0) {
                cout << " " << num[(n % 10) - 1] << endl;
            }
            else {
                cout << " " << ten[((n % 100) / 10) - 2];
                if (n % 10 != 0) {
                    cout << " " << num[(n % 10) - 1] << endl;
                }
                else
                    cout << endl;
            }
        }
        else
            cout << endl;
    }
}

void Task_5() {
    setlocale(LC_ALL, "Rus");
    int n, a, b;
    string colourm[5]{ "белого", "черного", "зеленого", "красного", "желтого" };
    string colourf[5]{ "белой", "черной", "зеленой", "красной", "желтой" };
    string anim[12]{ "крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезьяны", "курицы", "собаки", "свиньи" };
    cout << "This program displays the name of the year." << endl;
    cout << "Enter the year: " << endl << "N = "; cin >> n;
    if (n < 1) {
        cout << "The value is invalid." << endl;
        return;
    }
    else {
        a = (n + 8) % 12;//Для определения животного
        b = (n % 10) / 2;//Для определения цвета
        cout << "Год ";
        if ((a > 1) && (a < 5)) {
            cout << colourm[b];
        }
        else
            cout << colourf[b];
        cout << " " << anim[(n + 8) % 12] << endl;
    }
}

int main()
{
    int v, n = 1;
    while (n == 1) {
        cout << "Enter the number of the task (1 - 5): ";
        cin >> v;
        switch (v) {
        case 1:
            Task_1();
            break;
        case 2:
            Task_2();
            break;
        case 3:
            Task_3();
            break;
        case 4:
            Task_4();
            break;
        case 5:
            Task_5();
            break;
        default:
            cout << "Invalid number, try again";
            exit(0);
        }
        cout << "Want to continue? Enter your answer (1 for yes, 0 for no): ";
        cin >> n;
    }

    return 0;
}