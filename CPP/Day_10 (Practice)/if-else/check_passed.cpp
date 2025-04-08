#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks >= 40)
    {
        cout << "You passes with " << marks << " marks";
    }
    else
    {
        cout << "Sorry you failed!!";
    }

    return 0;
}