#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter element(1): ";
    cin >> num1;

    cout << "Enter element(2): ";
    cin >> num2;

    cout << "Enter element(3): ";
    cin >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << num1 << " is Large";
        }
        else
        {
            cout << num3 << " is Large";
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << num2 << " is Large";
        }
        else
        {
            cout << num3 << " is Large";
        }
    }

    return 0;
}