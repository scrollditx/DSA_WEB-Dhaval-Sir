#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    if (num % 5 == 0)
    {
        cout << num << " Is Divisible";
    }

    return 0;
}