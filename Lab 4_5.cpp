#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b;
    cout << "This program calculates the sum, difference, product and quotient of modules of entered numbers" << endl;
    cout << "Enter two any numbers, except zero" << endl;
    cin >> a;
    cin >> b;
    if ((a == 0) || (b == 0)) {
        cout << "One number is zero, calculations are impossible." << endl;
    }
    else {
        cout << "Sum is " << abs(a) + abs(b) << endl;
        cout << "Difference is " << abs(a) - abs(b) << endl;
        cout << "Product is " << abs(a) * abs(b) << endl;
        cout << "Quotient is " << abs(a) / abs(b) << endl;
    }
    return 0;
}