
#include <iostream>
#include<cmath>

using namespace std;

void Task_1() {
    const float pi = 3.14;
    float a;
    cout << "This program converts the angle value from degrees to radians." << endl;
    cout << ("Enter the value (0 - 360):") << endl << "A = "; cin >> a;
    if ((a < 0) || (a > 360)) {
        cout << "The value is invalid, try again." << endl;
    }
    else {
        a = (a / 180) * pi;
        cout << "Result: A = " << a << endl;
    }
}

void Task_2() {
    const float pi = 3.14;
    double a;
    cout << "This program converts the angle value from radians to degrees." << endl;
    cout << ("Enter the value (0 - 2 * pi):") << endl << "A = "; cin >> a;
    if ((a < 0) || (a >= 6.29)) {
        cout << "The value is invalid, try again." << endl;
    }
    else {
        a = (a / pi) * 180;
        cout << "Result: A = " << a << endl;
    }
}

void Task_3() {
    float c, w, y, p, r;
    cout << "This program calculates price of sweets for one kilogram and their cost for Y kilogram." << endl;
    cout << "Enter the cost of sweets, their weight and Y:" << endl << "Cost = "; cin >> c;
    cout << "Weight = "; cin >> w;
    cout << "Y = "; cin >> y;
    if ((c <= 0) || (w <= 0) || (y <= 0)) {
        cout << "One of the values is invalid, try again." << endl;
        return ;
    }
    p = c / w;//Calculate the price
    r = p * y;//Calculate cost of y kg
    cout << "Result: One kilogram of the sweets costs " << p << " rubles, " << y << " kilograms of the sweets cost " << r << " rubles." << endl;
}

void Task_4() {
    float v1, v2, s, t, d;
    cout << "This program calculates distance between vehicles after T hours." << endl;
    cout << "Enter the values:" << endl << "Speed of the first car = "; cin >> v1;
    cout << "Speed of the second car = "; cin >> v2; cout << "Initial distance between them = "; cin >> s;
    cout << "Time = "; cin >> t;
    if ((v1 < 0) || (v2 < 0) || (s < 0) || (t < 0)) {
        cout << "One of the values is invalid, try again." << endl;
        return;
    }
    d = s + ((v1 + v2) * t);
    cout << "Result: Distance = " << d << endl;
}

void Task_5() {
    double x, a, b, y;
    cout << "This program calculates solves the linear equation: A * x + B = 0." << endl;
    cout << "Enter the numbers:" << endl;
    cout << "A = "; cin >> a; cout << "B = "; cin >> b;
    if (a == 0) {
        cout << "Value A can't be zero." << endl;
        return;
    }
    x = (-b) / a;
    cout << "Result: x = " << x << endl;
}

void Task_6() {
    double a1, a2, b1, b2, c1, c2, x, y, d;
    cout << "This program calculates the solution of a system of linear equations of the species:" << endl;
    cout << "A1 * x + B1 * y = C1" << endl << "A2 * x + B2 * y = C2" << endl;
    cout << "Enter the numbers:" << endl << "A1 = "; cin >> a1;
    cout << "A2 = "; cin >> a2; cout << "B1 = "; cin >> b1;
    cout << "B2 = "; cin >> b2; cout << "C1 = "; cin >> c1; 
    cout << "C2 = "; cin >> c2;
    d = a1 * b2 - b1 * a2;//Дельта, определитель
    if (d == 0) {
        cout << "No solutions for such coefficients. Try again." << endl;
        return;
    }
    else {
        x = (c1 * b2 - b1 * c2) / d;
        y = (a1 * c2 - c1 * a2) / d;
        cout << "Result: x = " << x << ", y = " << y << endl;
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