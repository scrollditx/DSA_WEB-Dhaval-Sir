#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (age >= 18)
    {
        if (age >= 25)
        {
            cout << "You can Participate In election..";
        }
        else
        {
            cout << "You can vote...";
        }
    }
    else
    {
        cout << "You can't vote..";
    }

    return 0;
}