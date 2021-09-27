#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A, B, C;
    cout << "This program returns the length of sections AC and BC and their sum." << endl;
    cout << "Enter the coordinates of the points:" << endl << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;
    int AC, BC, sum;
    if (A >= C) {
        AC = A - C;
    }
    else {
        AC = C - A;
    }
    if (B >= C) {
        BC = B - C;
    }
    else {
        BC = C - B;
    }
    sum = AC + BC;
    cout << "AC = " << AC << ", BC = " << BC << ", AC + BC = " << sum;

    return 0;
}
