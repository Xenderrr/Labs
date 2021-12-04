#include <iostream>
#include<cmath>

using namespace std;

void Task_1() {
    int a, b;
    cout << "This program assigns the highest value to the variables, and if they are equal equals to zero." << endl;
    cout << ("Enter the values:") << endl << "A = "; cin >> a; cout << "B = "; cin >> b;
    if (a == b) {
        a = b = 0;
    }
    else {
        if (a > b) {
            b = a;
        }
        else
            a = b;
    }
    cout << "Result: A = " << a << ", B = " << b << endl;
}

void Task_2() {
    float a, b, c, sum, max1, max2;
    cout << "This program finds the sum of the two largest numbers of the three entered." << endl;
    cout << ("Enter the values:") << endl << "A = "; cin >> a; cout << "B = "; cin >> b; cout << "C = "; cin >> c;
    if ((a < b) && (a < c)) {
        sum = b + c;
    }
    else if ((b < c) && (b < a)) {
        sum = a + c;
    }
    else if ((c < a) && (c < b)) {
        sum = a + b;
    }
    else if ((a == b) && (b == c)) {
        cout << "The numbers are equal, try again." << endl;
        return;
    }
    else {
        cout << "There are no two largest numbers in this sequence, try again." << endl;
        return;
    }
    cout << "Result: Sum = " << sum << endl;
}

void Task_3() {
    double ax, ay, bx, by, cx, cy, ac, ab;
    cout << "There are three points on the plane: A, B, C. This program determines which point is closer to point A and displays the distance." << endl;
    cout << ("Enter the coordinates of the points:") << endl << "Ax = "; cin >> ax; cout << "Ay = "; cin >> ay;
    cout << "Bx = "; cin >> bx; cout << "By = "; cin >> by; cout << "Cx = "; cin >> cx; cout << "Cy = "; cin >> cy;
    if (((ax == bx) && (ay == by)) || ((ax == cx) && (ay == cy))) {
        cout << "Point B or C has the same coordinates as A, it's incorrect. Try again." << endl;
        return;
    }
    else {
        ab = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
        ac = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));
        if (ac > ab) {
            cout << "Point C (" << cx << "; " << cy << ") is closer to point A. The distance is " << ac << endl;
        }
        else if (ab > ac) {
            cout << "Point B (" << bx << "; " << by << ") is closer to point A. The distance is " << ab << endl;
        }
        else
            cout << "B and C are located at the same distance from point A." << endl;
    }
}

void Task_4() {
    double nx, ny, q;
    cout << "The coordinates of a point not lying on the coordinate axes OX and OY are given. This program determines in which quarter the point lies." << endl;
    cout << "Enter the coordinates: " << endl << "Nx = "; cin >> nx; cout << "Ny = "; cin >> ny;
    if ((nx == 0) || (ny == 0)) {
        cout << "The value is invalid, try again." << endl;
        return;
    }
    else {
        if (nx > 0) {
            if (ny > 0) {
                q = 1;
            }
            else
                q = 4;
        }
        else {
            if (ny < 0) {
                q = 3;
            }
            else
                q = 2;
        }
    }
    cout << "The point lies in " << q << " quarter." << endl;
}

void Task_5() {
    int n;
    cout << "An integer is given. This program prints out a description string of this number." << endl;
    cout << "Enter the value: " << endl << "N = "; cin >> n;
    cout << "The number is ";
    if (n == 0) {
        cout << "zero" << endl;
        return;
    }
    else if (n > 0){
        cout << "positive";
        if (n % 2 == 0) {
            cout << " and even." << endl;
        }
        else
            cout << " and uneven." << endl;
    }
    else {
        cout << "negative";
        if (n % 2 == 0) {
            cout << " and even." << endl;
        }
        else
            cout << " and uneven." << endl;
    }
}

void Task_6() {
    int n;
    cout << "An integer in the range 1 - 999 is given. This program prints out a description string of this number." << endl;
    cout << "Enter the value: " << endl << "N = "; cin >> n;
    if ((n < 1) || (n > 999)){
        cout << "The value is invalid. Try again." << endl;
        return;
    }
    else {
        cout << "The number is ";
        if (n / 100 > 0) {
            cout << "three-digit";
        }
        else if (n / 10 > 0) {
            cout << "two-digit";
        }
        else
            cout << "one-digit";
        if (n % 2 == 0) {
            cout << " and even." << endl;
        }
        else
            cout << " and uneven." << endl;
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
