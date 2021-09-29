
#include <iostream>

using namespace std;

int main()
{
    int A, B, C, AC, BC;
    cout << "This program calculates product of line lengths AC and BC." << endl << "Enter the points:" << endl;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;
    if (((C < A) && (C < B)) || ((C > A) && (C > B)) || (C == A) || (C == B)) {
        cout << "Point C must be placed between points A and B. Try again." << endl;
    }
    else {
        if (A > C) {
            AC = A - C;
        }
        else{
            AC = C - A;
        }
        if (B > C) {
            BC = B - C;
        }
        else {
            BC = C - B;
        }
        cout << "The result is " << AC * BC << endl;
    }
    return 0;
}