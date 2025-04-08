#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks <= 100)
    {
        if (marks >= 40)
        {
            cout << "You Passed";
        }
        else
        {
            cout << "You Failed";
        }
    }
    else
    {
        cout << "Enter valid marks";
    }

    return 0;
}