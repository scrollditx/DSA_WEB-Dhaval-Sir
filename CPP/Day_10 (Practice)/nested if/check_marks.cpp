#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 0 && marks <= 100)
    {
        if (marks >= 90)
        {
            cout << "Grade: A";
        }
        else if (marks >= 80)
        {
            cout << "Grade: B";
        }
        else if (marks >= 60)
        {
            cout << "Grade: C";
        }
        else if (marks >= 40)
        {
            cout << "Grade: D";
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