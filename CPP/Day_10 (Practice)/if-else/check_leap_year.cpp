#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter any year e.g(2020): ";
    cin >> year;

    if (year % 4 == 0 && year % 400 == 0)
    {
        cout << year << " is a leap year..";
    }
    else
    {
        cout << year << " is not a leap year..";
    }

    return 0;   
}