#include <iostream>
using namespace std;

int main() {
    int code;
    int num;
    cout << "Enter a code: ";
    cin >> code;
    cout <<"Enter num" <<endl;
    cin >>num;
    int originalCode = code;
    int divisor = 1;
    int digitCount = 0; 
    while (originalCode / divisor >= 10) {
        divisor = divisor * 10;
    while (divisor >= 1) {
        int digit = originalCode / divisor;
        switch (digit) {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }

        digitCount++;
        originalCode = originalCode % divisor;
        divisor = divisor / 10;
    }
    cout << "\nNumber of digits spoken: " << digitCount << endl;

    return 0;
}