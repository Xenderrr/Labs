#include <iostream>
#include<cmath>
#include <algorithm>

using namespace std;

void Task_1() {
    int a, b, n;
    cout << "Positive integers A and B are given (A < B).This program displays all integers from A to B inclusive." << endl;
    cout << ("Enter the values:") << endl << "A = "; cin >> a; cout << "B = "; cin >> b;
    if ((a > 0) && (a < b)){
        n = a;
        cout << "Result: ";
        while (n <= b) {
            for (int i = 1; i <= n; i++) {
                cout << n << " ";
            }
            n++;
        }
        cout << endl;
    }
    else {
        cout << "One of the values is invalid. Try again." << endl;
        return;
    }
}

void Task_2() {
    float a, b;
    cout << "Positive numbers A and B are given (A > B). The segment of length A contains the maximum possible number of segments of length B. This program finds the length of the unoccupied part of the segment A." << endl;
    cout << "Enter the values:" << endl << "A = "; cin >> a; cout << "B = "; cin >> b;
    if ((a > b) && (b > 0)) {
        while (b <= a) {
            a -= b;
        }
        cout << "The result: " << a << endl;
    }
    else {
        cout << "One of the values is invalid. Try again." << endl;
        return;
    }
}

void Task_3() {
    int n, s = 0, i;
    cout << "An integer N is given (N > 1).This program outputs the smallest of the integers K for which the sum is 1 + 2 +...+ K will be greater than or equal to N, and this amount itself." << endl;
    cout << ("Enter the value:") << endl << "N = "; cin >> n;
    if (n <= 1) {
        cout << "The value is invalid. Try again." << endl;
        return;
    }
    else {
        for (i = 1; s < n; i++) {
            s += i;
        }
        i--;
        cout << "The result: K = " << i << ", Sum = " << s << endl;
    }
}

void Task_4() {
    int k;
    float p, s = 1000;
    cout << "The initial deposit in the bank is 1000 rubles.\nEvery month, the size of the deposit increases by P percent of the available amount (P is a real number, 0 < P < 25).\nThis program determines in how many months the size of the deposit will exceed 1100 rubles and displays the found number of months K and the total size of the contribution S." << endl;
    cout << "Enter the value: " << endl << "P = "; cin >> p;
    if ((p > 0) && (p < 25)) {
        for (k = 1; s <= 1100; k++) {
            s += s * (p / 100);
        }
        k--;
        cout << "The result: K = " << k << " months, S = " << s << " rubles." << endl;
    }
    else {
        cout << "The value is invalid, try again." << endl;
        return;
    }
}

void Task_5() {
    int a, b, x;
    cout << "Positive integers A and B are given.This program finds their greatest common factor." << endl;
    cout << "Enter the values: " << endl << "A = "; cin >> a; cout << "B = "; cin >> b;
    if ((a < 1) || (b < 1)) {
        cout << "The value is invalid. Try again." << endl;
        return;
    }
    else {
        if (a < b) {
            x = a;
            a = b;
            b = x;
        }
        while (a % b != 0) {
            a %= b;
            x = a;
            a = b;
            b = x;
        }
        cout << "The result: " << b << endl;
    }
}

void Task_6() {
    int n, i = 3, f1 = 1, f2 = 1, fk = 1;
    cout << "An integer N is given (N > 1), which is the Fibonacci number: N = F(K). This program finds its serial number K." << endl;
    cout << "Enter the values: " << endl << "N = "; cin >> n;
    if (n <= 1) {
        cout << "The value is invalid. Try again." << endl;
        return;
    }
    else {
        while (fk < n) {
            fk = f1 + f2;
            f1 = fk - f1;
            f2 = fk;
            i++;
        }
        if (fk == n) {
            cout << "The result: K = " << i << endl;
        }
        else
            cout << "The entered integer is not a fibonacci number." << endl;
    }

}

int main()
{
    int v, n = 1;
    while (n == 1) {
        cout << "Enter the number of the task (1 - 6): ";
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
        default:
            cout << "Invalid number, try again";
            exit(0);
        }
        cout << "Want to continue? Enter your answer (1 for yes, 0 for no): ";
        cin >> n;
    }

    return 0;
}