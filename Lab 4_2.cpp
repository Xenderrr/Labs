#include <iostream>

using namespace std;

int main()
{
    int d;
    cout << "This program counts circumference" << endl;
    cout << "Enter diameter" << endl;
    cin >> d;
    if (d <= 0) {
        cout << "Amount is invalid, calculations are impossible." << endl;
    }
    else {
        cout << "Circumference is " << d * 3.14 << endl;
    }
    return 0;
}
