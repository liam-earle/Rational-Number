//Part B
#include "Rational.h"
#include "Rational.cpp"
#include <iostream>

using namespace std;

int main() {
    int numer1 = 2;
    int numer2 = 3;
    int denom1 = 3;
    int denom2 = 2;

    Rational x(numer1, denom1);
    Rational y(numer2, denom2);

    int choice;
    cout << "Enter Number: \n 1: X+Y \n 2: X-Y \n 3: X*Y \n 4: X/Y \n 5: X+=Y \n 6: X-=Y \n 7: X*=Y \n 8: X/=Y \n 9: toDouble() \n";
    cin >> choice;

    switch (choice) {
        case (1):
            cout << (x + y);
        case (2):
            cout << (x - y);
        case (3):
            cout << (x * y);
        case (4):
            cout << (x / y);
        case (5):
            cout << (x += y);
        case (6):
            cout << (x -= y);
        case (7):
            cout << (x *= y);
        case (8):
            cout << (x /= y);
        case (9):
            cout << x.toDouble();
            cout << y.toDouble();
        case (10):
            cout << x;
            cout << y;
    }

    return 0;
}

//Part C
/*
 Having a rational number in reduced form can be useful because it would be helpful on saving on memory.
 */


