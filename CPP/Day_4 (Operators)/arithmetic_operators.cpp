//? Operators in C++:

//! 1. Arithmetic Operators:- "+, -, *, /, %".

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Welcome to an ARITHMETIC CLUB!!!" << endl;

    cout << "Enter (a): ";
    cin >> a;

    cout << "Enter (b): ";
    cin >> b;

    cout << "Addition of " << a << " + " << b << " is " << (a + b) << endl;
    cout << "Addition of " << a << " - " << b << " is " << (a - b) << endl;
    cout << "Addition of " << a << " * " << b << " is " << (a * b) << endl;
    cout << "Addition of " << a << " / " << b << " is " << (a / b) << endl;
    cout << "Addition of " << a << " % " << b << " is " << (a % b);
    return 0;
}