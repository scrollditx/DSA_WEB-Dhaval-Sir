// Operate CRUD Operation on Array

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int num = 0, element, index, choice;

    do
    {
        cout << "\n-------- CRUD MENU --------" << endl;
        cout << "1. Create" << endl;
        cout << "2. Read" << endl;
        cout << "3. Update" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Exit" << endl;
        cout << "---------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number of elements (max " << 5 - num << "): ";
            cin >> element;
            cout << "Enter the elements: ";
            for (int i = num; i < num + element; i++)
            {
                cin >> arr[i];
            }
            num += element;
            cout << "Array created successfully!" << endl;
            break;

        case 2:
            cout << "Array elements are: ";
            for (int i = 0; i < num; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 3:
            cout << "Enter the index (0 to " << num - 1 << "): ";
            cin >> index;
            cout << "Enter the new element: ";
            cin >> element;
            arr[index] = element;
            cout << "Element updated successfully!" << endl;
            break;

        case 4:
            cout << "Enter the index (0 to " << num - 1 << "): ";
            cin >> index;
            for (int i = index; i < num - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            num--;
            cout << "Element deleted successfully!" << endl;
            break;

        case 5:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}