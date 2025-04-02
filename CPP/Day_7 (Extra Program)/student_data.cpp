#include <iostream>
using namespace std;

int main()
{
    int roll_No;
    string s_name, sub_1_Name, sub_2_Name, sub_3_Name;
    float sub_1_Marks, sub_2_Marks, sub_3_Marks, percentage, total;
    char standard;

    cout << "<-------Enter your details Kindly!!------->" << endl;

    cout << "Enter your Roll No: ";
    cin >> roll_No;

    cout << "Enter your Standard (A/B): ";
    cin >> standard;

    cout << "Enter your Name: ";
    cin >> s_name;

    cout << "Enter your First Subject's Name: ";
    cin >> sub_1_Name;

    cout << "Enter your Second Subject's Name: ";
    cin >> sub_2_Name;

    cout << "Enter your Third Subject's Name: ";
    cin >> sub_3_Name;

    cout << "Enter your First Subject's Marks: ";
    cin >> sub_1_Marks;

    cout << "Enter your Second Subject's Marks: ";
    cin >> sub_2_Marks;

    cout << "Enter your Third Subject's Marks: ";
    cin >> sub_3_Marks;

    total = sub_1_Marks + sub_2_Marks + sub_3_Marks;

    percentage = total / 3;

    cout << "<-------Your Result------->" << endl;

    cout << "Name:                                      " << s_name << endl;
    cout << "Roll No:                                   " << roll_No << endl;
    cout << "Standard:                                  " << standard << endl;
    cout << "First Subject's Name :                     " << sub_1_Name << endl;
    cout << "Second Subject's Name:                     " << sub_2_Name << endl;
    cout << "Third Subject's Name:                      " << sub_3_Name << endl;
    cout << "First Subject's Marks:                     " << sub_1_Marks << endl;
    cout << "Second Subject's Marks:                    " << sub_2_Marks << endl;
    cout << "Third Subject's Marks:                     " << sub_3_Marks << endl;
    cout << "Total Marks:                               " << total << endl;
    cout << "Percentage:                                " << percentage << endl;

    if (total <= 300)
    {
        if (sub_1_Marks >= 35 && sub_2_Marks >= 35 && sub_3_Marks >= 35)
        {
            cout << "Congratulations, You Nailed It!!" << endl;

            if (percentage >= 90)
            {
                cout << "Grade A+" << endl;
            }
            else if (percentage >= 80)
            {
                cout << "Grade A" << endl;
            }
            else if (percentage >= 70)
            {
                cout << "Grade B+" << endl;
            }
            else if (percentage >= 60)
            {
                cout << "Grade B" << endl;
            }
            else if (percentage >= 40)
            {
                cout << "Grade C" << endl;
            }
            else
            {
                cout << "Sorry, You Failed" << endl;
            }
        }
        else
        {
            cout << "Sorry, You are Fail!" << endl;
        }
    }
    else
    {
        cout << "Check your Total Marks, and  ENTER VALID MARKS!!" << endl;
    }

    return 0;
}