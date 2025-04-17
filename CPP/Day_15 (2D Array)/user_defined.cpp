#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    int arr[rows][cols];

    cout << "Enter numbers of rows: ";
    cin >> rows;

    cout << "Enter numbers of cols: ";
    cin >> cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter values a[" << i << "] & b[" << j << "]";
            cin >> arr[i][j];
        }
    }

    return 0;
}