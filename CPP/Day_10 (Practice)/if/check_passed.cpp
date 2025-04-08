#include <iostream>
using namespace std;

int main ()
{
    int marks;
    cout << "Enter Marks(0-100): ";
    cin >> marks;

    if (marks >= 35)
    {
        cout << "You Passed";
    }
    
    return 0;
}