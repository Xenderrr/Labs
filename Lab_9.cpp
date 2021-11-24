#include <iostream>
#include<cmath>

using namespace std;

void Task_1() {
    float n, s, c;
    cout << "This program calculates number of seconds elapsed since the beginning of the last minute." << endl;
    cout << ("Enter the value:") << endl << "N = "; cin >> n;
    if (n < 0) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    else {
        c = int(n * 10000) % 10000;
        s = int(n) % 60 + c / 10000;
        cout << "Result: " << s << " sec" << endl;
    }
}

void Task_2() {
    int k, r;
    cout << "This program defines the day of the week for a given day K." << endl;
    cout << ("Enter the value:") << endl << "K = "; cin >> k;
    if ((k <= 0) ||(k > 365)) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    else {
        r = k % 7;
        cout << "Result: " << r << endl;
    }
}

void Task_3() {
    int k, n, r;
    cout << "This program defines the day of the week for a given day K (K = 1-365). The year starts with N (N = 1-7) day of the week." << endl;
    cout << ("Enter the values:") << endl << "K = "; cin >> k; cout << "N = "; cin >> n;
    if ((n < 1) || (n > 7) || (k <= 0) || (k > 365)) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    else {
        n--;
        if (k % 7 == 0) {
            r = 7 + n;
        } else
            r = k % 7 + n;
        cout << "Result: " << r << endl;
    }
}

void Task_4() {
    int a, b, c, q, s;
    cout << "This program calculates how many squares with side C can fit on a rectangle of area A * B." << endl;
    cout << "Enter the values: " << endl << "A = "; cin >> a; cout << "B = "; cin >> b; cout << "C = "; cin >> c;
    if ((a < 1) || (b < 1) || (c < 1) || (c > a) || (c > b)) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    else {
        q = (a / c) * (b / c);
        s = a * b - (q * c * c);
    }
    cout << "Result: " << endl << "Quantity of squares - " << q << ", free area - " << s << endl;
}

void Task_5() {
    int x, c;
    cout << "This program defines the century of the entered year." << endl;
    cout << "Enter the year: "; cin >> x;
    if (x < 1) {
        cout << "The year is invalid, try again." << endl;
        return;
    }
    else {
        c = x / 100 + 1;
        if (x % 100 == 0)
            c--;
    }
    cout << "Result: " << c << endl;
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