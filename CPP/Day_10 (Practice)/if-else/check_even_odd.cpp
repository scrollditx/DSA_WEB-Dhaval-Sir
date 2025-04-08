#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "You entered an even number: " << num;
    }
    else
    {
        cout << "You entered a odd number: " << num;
    }

    return 0;
}