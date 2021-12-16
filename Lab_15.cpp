#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void PowerA3(float a, float *b) {
    *b = pow(a, 3);
}

void Task_1() {
    float a, b;
    cout << "This program displays the third powers of five entered numbers." << endl;
    for (int i = 1; i < 6; i++) {
        cout << "Enter the value " << i << ": "; cin >> a;
        PowerA3(a, &b);
        cout << "The result: " << a << "^3 = " << b << endl;
    }
}

int Sign(float x) {
    if (x < 0) {
        return -1;
    }
    else if (x == 0) {
        return 0;
    }
    else
        return 1;
}

void Task_2() {
    float a, b;
    cout << "This program returns the sum of functions from the entered pair of numbers" << endl;
    cout << "Enter the values:" << endl << "A = "; cin >> a; cout << "B = "; cin >> b;
    a = Sign(a); b = Sign(b);
    cout << "The result: " << a + b << endl;
}

float RingS(float r1, float r2) {
    float s1, s2;
    double pi = 3.1415926535;
    s1 = pow(r1, 2) * pi;
    s2 = pow(r2, 2) * pi;
    return s1 - s2;
}

void Task_3() {
    float r1, r2;
    cout << "Two radii R1 and R2 are given (R1 > R2). This program finds the area of the ring between them." << endl;
    for (int i = 1; i < 4; i++) {
        cout << ("Enter the values:") << endl << "R1 = "; cin >> r1; cout << "R2 = "; cin >> r2;
        if ((r1 <= r2) || (r2 <= 0)) {
            cout << "The values are invalid. Try again" << endl;
            return;
        }
        else {
            cout << "The result: " << RingS(r1, r2) << endl;
        }
    }
}

int Quarter(float x, float y) {
    if ((x > 0) && (y > 0)) {
        return 1;
    }
    else if ((x < 0) && (y > 0)) {
        return 2;
    }
    else if ((x < 0) && (y < 0)) {
        return 3;
    }
    else
        return 4;
}

void Task_4() {
    float x, y;
    cout << "This program finds the number of the coordinate quarter in which the point with the given non-zero coordinates is located." << endl;
    for (int i = 1; i < 4; i++) {
        cout << "Enter the values: " << endl << "X = "; cin >> x; cout << "Y = "; cin >> y;
        if ((x == 0) || (y == 0)) {
            cout << "One of the value is invalid. Try again." << endl;
            return;
        }
        else {
            cout << "The result: this point lies in " << Quarter(x, y) << " quarter" << endl;
        }
    }
    
}

float Fact2(int n) {
    float f = 1;
    if (n % 2 == 1) {
        for (int i = 1; i <= n; i += 2) {
            f *= i;
        }
    }
    else {
        for (int i = 2; i <= n; i += 2) {
            f *= i;
        }
    }
    return f;
}

void Task_5() {
    int n;
    cout << "This program outputs the double factorial of the entered number." << endl;
    cout << "Enter the value: " << endl << "N = "; cin >> n;
    if (n < 1) {
        cout << "The value is invalid. Try again." << endl;
        return;
    }
    else {
        cout << "The result: N!! = " << Fact2(n) << endl;
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