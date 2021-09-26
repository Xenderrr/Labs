
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "This program counts square and perimeter of rectangle" << endl;
    cout << "Enter side a and side b" << endl;
    cin >> a;
    cin >> b;
    if ((a <= 0) || (b <= 0)) {
        cout << "One amount is invalid, calculations are impossible." << endl;
    }
    else {
        cout << "Square is " << a * b << endl;
        cout << "Perimeter is " << 2 * (a + b) << endl;
    }
    return 0;
}
