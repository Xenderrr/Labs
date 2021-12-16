#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void Task_1() {
    int n;
    cout << "Positive integer N is given (N > 0).This program displays all unevel integers from 1 to N inclusive." << endl;
    cout << ("Enter the value:") << endl << "N = "; cin >> n;
    if (n > 0) {
        int* arr = new int[n];
        for (int i = 0; i <= n; i++) {
            arr[i] = i * 2 + 1;
        }
        cout << "The result: " << arr[0];
        for (int i = 1; i < n; i++)
            cout << ", " << arr[i];
        cout << endl;
    }
    else {
        cout << "One of the values is invalid. Try again." << endl;
        return;
    }
}

void Task_2() {
    int n;
    float a, d;
    cout << "An integer N, the first term A and the denominator D of a geometric progression are given (N > 1).\nThis program outputs an array of size N containing the first N members of a given geometric progression." << endl;
    cout << "Enter the values:" << endl << "N = "; cin >> n; cout << "A = "; cin >> a; cout << "D = "; cin >> d;
    if (n > 1) {
        float* arr = new float[n];
        for (int i = 0; i < n; i++) {
            arr[i] = a * pow(d, i);
        }
        cout << "The result: " << arr[0];
        for (int i = 1; i < n; i++)
            cout << ", " << arr[i];
        cout << endl;
    }
    else {
        cout << "One of the values is invalid. Try again." << endl;
        return;
    }
}

void Task_3() {
    int n, a, b, sum;
    cout << "Integers N, A and B are given (N > 2).\nThis program outputs an integer array of size N, the first element of which is equal to A,\nthe second is equal to B, and each subsequent element is equal to the sum of all previous." << endl;
    cout << ("Enter the values:") << endl << "N = "; cin >> n; cout << "A = "; cin >> a; cout << "B = "; cin >> b;
    if (n <= 2) {
        cout << "The value is invalid. Try again." << endl;
        return;
    }
    else {
        int* arr = new int[n];
        arr[0] = a; arr[1] = b; 
        sum = a + b;
        for (int i = 2; i < n; i++) {
            arr[i] = sum;
            sum += arr[i];
        }
        cout << "The result: " << arr[0];
        for (int i = 1; i < n; i++)
            cout << ", " << arr[i];
        cout << endl;
    }
}

void Task_4() {
    int n, j = 0;
    cout << "An array A of size N is given.\nThis program outputs its elements in the following order: A[1], A[N], A[2], A[N-1], A[3], A[N-2]..." << endl;
    cout << "Enter the values: " << endl << "N = "; cin >> n;
    if (n > 0){
        float* a = new float[n];
        int z = n - 1;
        cout << "A = ";
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << "The result: ";
        for (int i = 0; i < n; i++) {
            if ((i + 1) % 2 == 1) {
                cout << a[j] << " ";
                j++;
            }
            else {
                cout << a[z] << " ";
                z--;
            }
        }
        cout << endl;
    }
    else {
        cout << "The value is invalid, try again." << endl;
        return;
    }
}

void Task_5() {
    int n, j, z;
    cout << "An array A of size N is given.\nThis program outputs first its odd-numbered elements in ascending order of numbers, and then its even-numbered elements in descending order." << endl;
    cout << "Enter the values: " << endl << "N = "; cin >> n;
    if (n > 0) {
        float* a = new float[n];
        j = 0;
        if (n % 2 == 0) {
            z = n - 1;
        }
        else
            z = n - 2;
        cout << "A = ";
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << "The result: ";
        for (int i = 0; i < n; i++) {
            while (j < n) {
                cout << a[j] << " ";
                j += 2;
            }
            while (z > 0) {
                cout << a[z] << " ";
                z -= 2;
            }
        }
        cout << endl;
    }
    else {
        cout << "The value is invalid. Try again." << endl;
        return;
    }
  
}

int main()
{
    int v, n = 1;
    while (n == 1) {
        cout << "Enter the number of the task (1 - 5): ";
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
        default:
            cout << "Invalid number, try again";
            exit(0);
        }
        cout << "Want to continue? Enter your answer (1 for yes, 0 for no): ";
        cin >> n;
    }

    return 0;
}