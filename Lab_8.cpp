#include <iostream>
#include<cmath>

using namespace std;

void Task_1() {
    float a;
    cout << "This program converts the file size from bytes to kilobytes." << endl;
    cout << ("Enter the value:") << endl << "A = "; cin >> a;
    if (a < 0) {
        cout << "The value is invalid, try again." << endl;
    }
    else {
        a /= 1024;
        cout << "Result: A = " << floor(a) << " KB" << endl;
    }
}

void Task_2() {
    float a, b, c;
    cout << "This program counts how many segments of length B fit on a segment of length A." << endl;
    cout << ("Enter the values:") << endl << "A = "; cin >> a; cout << "B = "; cin >> b;
    if ((a < b) || (a <= 0)) {
        cout << "The value is invalid, try again." << endl;
    }
    else {
        c = a / b;
        cout << "Result: " << floor(c) << endl;
    }
}

void Task_3() {
    float a, b, c;
    cout << "This program finds the length of the unoccupied part of the segment A." << endl;
    cout << ("Enter the values:") << endl << "A = "; cin >> a; cout << "B = "; cin >> b;
    if ((a < b) || (a <= 0)) {
        cout << "The value is invalid, try again." << endl;
    }
    else {
        c = a / b;
        a -= floor(c) * b;
        cout << "Result: " << a << endl;
    }
}

void Task_4() {
    float a, a_1, a_2, b;
    cout << "This program swaps the digits of a two-digit number." << endl;
    cout << "Enter the value: "; cin >> a;
    if ((a > 99) || (a < 10)) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    a_1 = int(a / 10); a_2 = int(a) % 10;
    b = a_2 * 10 + a_1;
    cout << "Result: " << b << endl;
}

void Task_5() {
    double a, b, a_1, a_2, a_3;
    cout << "This program puts the most significant digitof a three-digit number on the least significant." << endl;
    cout << "Enter the number:"; cin >> a;
    if ((a > 999) || (a < 100)) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    a_1 = int(a / 100); a_2 = int(a / 10) % 10; a_3 = int(a) % 10;
    b = a_2 * 100 + a_3 * 10 + a_1;
    cout << "Result: " << b << endl;
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