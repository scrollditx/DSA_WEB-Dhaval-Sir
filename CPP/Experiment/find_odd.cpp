//Find Odd Number 

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 1)
    {
        cout << number << " is ODD!";
    }
    else
    {
        cout << number << " is EVEN!!";
    }

    return 0;
}