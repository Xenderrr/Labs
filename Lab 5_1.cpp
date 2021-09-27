
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2, y1, y2;
    cout << "This program calculates the distance between two points" << endl;
    cout << "Enter coordinates of point A:" << endl << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "Enter coordinates of point B:" << endl <<"x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    float dist;
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Distance is " << dist << endl;

    return 0;
}

