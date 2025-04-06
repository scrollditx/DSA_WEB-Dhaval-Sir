#include <iostream>
using namespace std;

int main ()
{
    int i = 0;

    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        i ++;
    }

    // for (i = 0; i <= 10; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }
    
    
    return 0;
}