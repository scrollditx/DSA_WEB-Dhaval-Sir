#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    num >= 0 ? cout << "Number is Positive" : cout << "Number is Negative";
    return 0;
}