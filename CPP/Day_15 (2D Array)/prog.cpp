#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int choice, rows, cols, sum = 0, max, min, row_sum = 0, col_sum = 0;

    do
    {
        cout << "\n------ 2D Array Operations ------" << endl;
        cout << "1. Display 2D array" << endl;
        cout << "2. Create NEW 2D array" << endl;
        cout << "3. Calculate SUM of 2D array" << endl;
        cout << "4. Calculate MAXIMUM element of 2D array" << endl;
        cout << "5. Calculate MINIMUM element of 2D array" << endl;
        cout << "6. Calculate Row-wise & Column-wise Sum" << endl;
        cout << "0. Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n Current 2D Array:\n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 2:
            cout << "\n Create New Array\n";
            cout << "Enter numbers of rows: ";
            cin >> rows;
            cout << "Enter numbers of cols: ";
            cin >> cols;

            cout << endl;

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << "Enter value for position [" << i << "][" << j << "]: ";
                    cin >> arr[i][j];
                }
            }
            cout << "\nNew 2D Array Created:\n";
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 3:
            cout << "\nCalculating sum of 2D array...\n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    sum += arr[i][j];
                }
            }
            cout << "Sum of all elements: \n"
                 << sum;
            break;

        case 4:
            cout << "\nCalculating MAX element of a 2D array...\n";
            max = arr[0][0];

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (arr[i][j] > max)
                    {
                        max = arr[i][j];
                    }
                }
            }

            cout << "\n Maximum element is \n"
                 << max;

            break;

        case 5:
            cout << "\nCalculating MIN element of a 2D array...\n";
            min = arr[0][0];

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (arr[i][j] < min)
                    {
                        min = arr[i][j];
                    }
                }
            }

            cout << "\n Minimum element is \n"
                 << min;

            break;

        case 6:
            cout << "\n Calculating Row-wise & Column-wise...";

            cout << "\n Row-wise sum: \n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    row_sum += arr[i][j];
                }
            }
            cout << "Row Sum of all elements: \n"
                 << row_sum;

            cout << "\n Column-wise sum: \n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    col_sum += arr[i][j];
                }
            }
            cout << "Col Sum of all elements: \n"
                 << col_sum;
            break;

        case 0:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Error: Invalid choice! Please try again." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}