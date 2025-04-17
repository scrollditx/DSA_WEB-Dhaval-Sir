#include <iostream>
using namespace std;

int main ()
{
    int marks;

    cout << "Enter Marks (0-100): ";
    cin >> marks;

    marks >= 40 ? cout << "Passed" : cout << "Failed";
    return 0;
}