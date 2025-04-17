#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    num % 2 == 0 ? cout << "Num is Even" : cout << "Num is Odd";
    return 0;
}