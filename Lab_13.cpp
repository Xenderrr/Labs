#include <iostream>
#include<cmath>
#include <locale.h>

using namespace std;

void Task_1() {
    int p;
    cout << "This program displays the cost of 0.1, 0.2,..., 1 kg of sweets." << endl;
    cout << ("Enter the price:") << endl << "Price = "; cin >> p;
    if (p <= 0) {
        cout << "The value is invalid. Try again." << endl;
        return;
    }
    else {
        for (float i = 0.1; i < 1.1; i += 0.1) {
            cout << "The cost of " << i << " kg is " << p * i << endl;
        }
    }
}

void Task_2() {
    int n, v = 1;
    double i = 1.1, p = 1;
    cout << "This program finds the product 1.1 * 1.2 * 1.3 *...(N factors)." << endl;
    cout << "Enter the value:" << endl << "N = "; cin >> n;
    if (n < 1) {
        cout << "The value is invalid. Try again." << endl;
        return;
    }
    else {
        cout << i << " ";
        while (v <= n) {
            p *= i;
            v++;
            i += 0.1;
            if (v <= n)
                cout << "* " << i << " ";
        }
        cout << "= " << p << endl;
    }
}

void Task_3() {
    int n, v = 1, r = 0;
    cout << "This program finds the square of a given number using the following formula: N^2 = 1 + 3 + 5 +...+ (2 * N - 1)." << endl;
    cout << ("Enter the value:") << endl << "N = "; cin >> n;
    if (n < 1) {
        cout << "The value is invalid. Try again." << endl;
        return;
    }
    else {
        while (v <= (2 * n) - 1) {
            r += v;
            cout << "Current sum is " << r << endl;
            v += 2;
        }
        cout << "The result: N^2 = " << r << endl;
    }
}

void Task_4() {
    int n, v = 1;
    float a, s = 1;
    cout << "This program finds the sum 1 + A + A^2 + A^3 +...+ A^N." << endl;
    cout << "Enter the values: " << endl << "A = "; cin >> a; cout << "N = "; cin >> n;
    if (n < 1) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    else {
        cout << "The sum = 1";
        while (v <= n) {
            s += pow(a, v);
            cout << " + " << a << "^" << v;
            v++;
        }
        cout << " = " << s << endl;
        cout << "The result: " << s << endl;
    }
}

void Task_5() {
    int n, v = 1;
    float a, e = 1, d;
    cout << "This program finds the expression value: 1 - A + A^2 - A^3 +...+/- A^N ." << endl;
    cout << "Enter the values: " << endl << "A = "; cin >> a; cout << "N = "; cin >> n;
    if (n < 1) {
        cout << "The value is invalid. Try again." << endl;
        return;
    }
    else {
        d = a;
        while (v <= n) {
            e -= d;
            d *= (-a);
            v++;
        }
        cout << "The result: " << e << endl;
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