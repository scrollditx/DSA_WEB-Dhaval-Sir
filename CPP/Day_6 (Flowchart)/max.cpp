#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2, num_3;

    cout << "Enter (num_1): ";
    cin >> num_1;

    cout << "Enter (num_2): ";
    cin >> num_2;

    cout << "Enter (num_3): ";
    cin >> num_3;

    if (num_1 >= num_2)
    {
        if (num_1 >= num_3)
        {
            cout << num_1 << " is Max";
        }
        else
        {
            cout << num_3 << " is Max";
        }
    }
    else
    {
        if (num_2 >= num_3)
        {
            cout << num_2 << " is Max";
        }
        else
        {
            cout << num_3 << " is Max";
        }
    }

    return 0;
}