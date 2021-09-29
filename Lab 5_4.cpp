

#include <iostream>

using namespace std;

int main()
{
    int x1, x2, y1, y2, a, b;
    cout << "This program calculates perimeter and area of the rectangle." << endl << "Enter the coordinates of two opposite vertices of the rectangle" << endl;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    if ((x1 != x2) && (y1 != y2)) {
        if (x2 > x1) {
            a = x2 - x1;
        }
        else {
            a = x1 - x2;
        }
        if (y2 > y1) {
            b = y2 - y1;
        }
        else {
            b = y1 - y2;
        }
        cout << "Perimetr is " << 2 * (a + b) << endl << "Area is " << a * b << endl;
    }
    else {
        cout << "Rectangle with such coordinates of vertices doesn't exist." << endl;
    }
    return 0;
}

