
#include <iostream>
#include<cmath>

using namespace std;

void Task_1() {
    int a, b;
    cout << "This program swaps the contents of variables A and B." << endl;
    cout << ("Enter two numbers:") << endl << "A = "; cin >> a;
    cout << "B = "; cin >> b;
    a += b; b = a - b; a -= b;
    cout << "Result: A = " << a << ", B = " << b << endl;
}

void Task_2() {
    int a, b, c;
    cout << "This program swaps the contents of variables A, B and C." << endl;
    cout << ("Enter three numbers:") << endl << "A = "; cin >> a;
    cout << "B = "; cin >> b; 
    cout << "C = "; cin >> c;
    a += b + c; b = a - (b + c);
    c = a - (b + c); a -= (b + c);
    cout << "Result: A = " << a << ", B = " << b << ", C = " << c << endl;
}

void Task_3() {
    int a, b, c;
    cout << "This program swaps the contents of variables A, B and C." << endl;
    cout << "Enter three numbers:" << endl << "A = "; cin >> a;
    cout << "B = "; cin >> b;
    cout << "C = "; cin >> c;
    a += b + c; c = a - (b + c);
    b = a - (b + c); a -= b + c;
    cout << "Result: A = " << a << ", B = " << b << ", C = " << c << endl;
}

void Task_4() {
    double x, y;
    cout << "This program calculates the value of the function y = 3x^6 − 6x^2 − 7. " << endl;
    cout << "Enter the number:" << endl << "x = "; cin >> x;
    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    cout << "Result: y = " << y << endl;
}

void Task_5() {
    double x, y;
    cout << "This program calculates the value of the function y = 4(x - 3)^6 - 7(x - 3)^3 + 2." << endl;
    cout << "Enter the number:" << endl << "x = "; cin >> x;
    y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
    cout << "Result: y = " << y << endl;
}

void Task_6() {
    double a, a_2, a_4, a_8;
    cout << "This program calculates A^8." << endl;
    cout << "Enter the number:" << endl << "A = "; cin >> a;
    a_2 = a * a; a_4 = a_2 * a_2; a_8 = a_4 * a_4;
    cout << "Result: A^8 = " << a_8 << endl;
}

void Task_7() {
    double a, a_15, a_3, a_6;
    cout << "This program calculates A^15." << endl;
    cout << "Enter the number:" << endl << "A = "; cin >> a;
    a_3 = a * a * a; a_6 = a_3 * a_3; a_15 *= a_6 * a_6 * a_3;
    cout << "Result: A^15 = " << a_15 << endl;
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
