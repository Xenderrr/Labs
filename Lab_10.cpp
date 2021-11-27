#include <iostream>
#include<cmath>

using namespace std;

void Task_1() {
    int a, b;
    cout << "This program checks the truth of the statement: The inequalities A > 2 and B <= 3 are true." << endl;
    cout << ("Enter the values:") << endl << "A = "; cin >> a; cout << "B = "; cin >> b;
    if ((a > 2) && (b <= 3)){
        cout << "The statement is true." << endl;
    }
    else {
        cout << "The statement is false." << endl;
    }
}

void Task_2() {
    int a, b, c;
    cout << "This program checks the truth of the statement: The double inequality A < B < C." << endl;
    cout << ("Enter the values:") << endl << "A = "; cin >> a; cout << "B = "; cin >> b; cout << "C = "; cin >> c;
    if ((a < b) && (b < c)) {
        cout << "The statement is true." << endl;
    }
    else {
        cout << "The statement is false." << endl;
    }
}

void Task_3() {
    int n;
    cout << "This program checks the truth of the statement: The given number is an even and two-digit." << endl;
    cout << ("Enter the value:") << endl << "N = "; cin >> n;
    if ((n % 2 == 0) && (n < 100) && (n > 9)) {
        cout << "The statement is true." << endl;
    }
    else {
        cout << "The statement is false." << endl;
    }
}

void Task_4() {
    int a, b, c, n;
    cout << "This program checks the truth of the statement: The numbers of a given number form an increasing or decreasing sequence." << endl;
    cout << "Enter the value: " << endl << "N = "; cin >> n;
    if ((n < 100) || (n > 999)) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    else {
        a = n / 100;
        b = (n / 10) % 10;
        c = n % 10;
        if (((a < b) && (b < c)) || ((a > b) && (b > c))) {
            cout << "The statement is true." << endl;
        }
        else {
            cout << "The statement is false." << endl;
        }
    }
}

void Task_5() {
    int n, a, b, c, d;
    cout << "This program checks the truth of the statement: The given number is read the same from left to right and from right to left." << endl;
    cout << "Enter the value: " << endl << "N = "; cin >> n;
    if ((n < 1000) || (n > 9999)) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    else {
        a = n / 1000;
        b = (n / 100) % 10;
        c = (n % 100) / 10;
        d = n % 10;
        if ((a == d) && (b == c)) {
            cout << "The statement is true." << endl;
        }
        else {
            cout << "The statement is false." << endl;
        }
    }
}

void Task_6() {
    int a, b, c, r;
    cout << "This program checks the truth of the statement: A triangle with sides A, B, C is rectangular." << endl;
    cout << "Enter the values:" << endl << "A = "; cin >> a; cout << "B = "; cin >> b; cout << "C = "; cin >> c;
    if ((a < 1) || (b < 1) || (c < 1)) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    else {
        if (a * a == b * b + c * c) {
            r = 1;
        }
        else if (b * b == a * a + c * c) {
            r = 1;
        }
        else if (c * c == a * a + b * b) {
            r = 1;
        }
        else
            r = 0;
        if (r == 1) {
            cout << "The statement is true." << endl;
        }else
            cout << "The statement is false." << endl;
    }
}

void Task_7() {
    int a, b, c;
    cout << "This program checks the truth of the statement: There is a triangle with sides A, B, C." << endl;
    cout << "Enter the values:" << endl << "A = "; cin >> a; cout << "B = "; cin >> b; cout << "C = "; cin >> c;
    if ((a < 1) || (b < 1) || (c < 1)) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    else {
        if ((a + b) > c && (a + c) > b && (b + c) > a) {
            cout << "The statement is true." << endl;
        }
        else
            cout << "The statement is false." << endl;
    }
}

int main()
{
    int v, n = 1;
    while (n == 1) {
        cout << "Enter the number of the task (1 - 7): ";
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
        case 6:
            Task_6();
            break;
        case 7:
            Task_7();
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