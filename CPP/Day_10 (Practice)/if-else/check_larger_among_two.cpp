#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter element(1): ";
    cin >> num1;

    cout << "Enter element(2): ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << num1 << " is Larger..";
    }
    else
    {
        cout << num2 << " is Larger..";
    }

    return 0;
}