#include <iostream>
using namespace std;

int main()
{
    int num, sum;
    
    cout << "Enter a number: ";
    cin >> num;

    
    for (int i = 1; i <= num; i++)
    {
        sum = num * (num + 1) / 2;
    }
    

    cout << sum;
    return 0;
}