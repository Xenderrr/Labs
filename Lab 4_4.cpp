
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b;
    cout << "This program calculates the sum, difference, product and quotient of squares of entered numbers" << endl;
    cout << "Enter two any numbers, except zero" << endl;
    cin >> a;
    cin >> b;
    if ((a == 0) || (b == 0)) {
        cout << "One number is zero, calculations are impossible." << endl;
    }
    else {
        cout << "Sum is " << pow(a, 2) + pow(b, 2) << endl;
        cout << "Difference is " << pow(a, 2) - pow(b, 2) << endl;
        cout << "Product is " << pow(a, 2) * pow(b, 2) << endl;
        cout << "Quotient is " << pow(a, 2) / pow(b, 2) << endl;
    }
    return 0;
}
