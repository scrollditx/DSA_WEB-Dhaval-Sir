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

    // if (num_1 > num_2 && num_1 > num_3 && num_1 > num_4)
    // {
    //     cout << "Number 1 is Max";
    // }
    // else if (num_2 > num_3 && num_2 > num_4 && num_2 > num_1)
    // {
    //     cout << "Number 2 is Max";
    // }
    // else if (num_3 > num_1 && num_3 > num_2 && num_3 > num_4)
    // {
    //     cout << "Number 3 is Max";
    // }
    // else if (num_4 > num_1 && num_4 > num_2 && num_4 > num_3)
    // {
    //     cout << "Number 4 is Max";
    // }
    // else
    // {
    //     cout << "Invalid Input";
    // }
    return 0;
}