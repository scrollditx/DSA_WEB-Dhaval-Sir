#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number (1-7): ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Earth pe 7 se zyada koi din nahi hei....";
        break;
    }
    return 0;
}