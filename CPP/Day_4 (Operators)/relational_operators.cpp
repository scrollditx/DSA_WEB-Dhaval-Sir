//! Realtional Operators:- "==, !=, >, <, >=, <="
//? It will return "0" and "1" 0 = "False" and 1 = "True".

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Here we are going to see all Realtional Operators!!" << endl;

    cout << "Enter element (a): ";
    cin >> a;

    cout << "Enter element (b): ";
    cin >> b;

    cout << a << " == " << b << " : " << (a == b) << endl;
    cout << a << " != " << b << " : " << (a != b) << endl;
    cout << a << " > " << b << " : " << (a > b) << endl;
    cout << a << " < " << b << " : " << (a < b) << endl;
    cout << a << " >= " << b << " : " << (a >= b) << endl;
    cout << a << " <= " << b << " : " << (a <= b);

    return 0;
}