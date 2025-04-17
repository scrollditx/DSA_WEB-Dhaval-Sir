#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char operators;

    cout << "Enter an operator (+, -, *,/ ,%): ";
    cin >> operators;

    cout << "Enter an element (1): ";
    cin >> num1;

    cout << "Enter an element (2): ";
    cin >> num2;

    switch (operators)
    {
    case '+':
        cout << "Addition is: " << num1 + num2;
        break;
    case '-':
        cout << "Subtraction is: " << num1 - num2;
        break;
    case '*':
        cout << "Multiplication is: " << num1 * num2;
        break;
    case '/':
        cout << "Division is: " << num1 / num2;
        break;
    case '%':
        cout << "Modulo is: " << num1 % num2;
        break;

    default:
        cout << "error";
        break;
    }
    return 0;
}