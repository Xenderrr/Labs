
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3;
    float a, b, c, perim, area, p;
    cout << "This program calculates perimeter and area of the triangle." << endl << "Enter the coordinates of the vertices of the triangle:" << endl;
    cout << "x1 = "; cin >> x1; cout << "y1 = "; cin >> y1; 
    cout << "x2 = "; cin >> x2; cout << "y2 = "; cin >> y2;
    cout << "x3 = "; cin >> x3; cout << "y3 = "; cin >> y3;
    if (((x1 == x2) && (x2 == x3)) || ((y1 == y2) && (y2 == y3))) {
        cout << "Triangle with such coordinates of the vertices doesn't exist." << endl;
        exit(0);
    }
    a = pow((pow((x2 - x1), 2) + pow((y2 - y1), 2)), 0.5);
    b = pow((pow((x3 - x2), 2) + pow((y3 - y2), 2)), 0.5);
    c = pow((pow((x3 - x1), 2) + pow((y3 - y1), 2)), 0.5);
    perim = a + b + c;
    p = perim / 2;
    area = pow((p * (p - a) * (p - b) * (p - c)), 0.5);
    cout << "Perimeter is " << perim << endl << "Area is " << area << endl;

}
