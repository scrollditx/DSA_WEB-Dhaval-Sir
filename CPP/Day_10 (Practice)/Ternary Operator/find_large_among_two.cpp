#include <iostream>
using namespace std;

int main ()
{
    int num1, num2;

    cout << "Enter Number 1: ";
    cin >> num1;

    cout << "Enter Number 2: ";
    cin >> num2;

    num1 > num2 ? cout << "Num1 Is Max.." : cout << "Num2 Is max";
    return 0;
}