//? Student data using cin "OBJECT" its like an input.
//! Note:-//Use 'underscore' sign("_") instead of "space".
#include <iostream>
#define country_code "+91"
using namespace std;

int main()
{
    int roll_no;
    string your_name, your_email, your_number;
    char gender;
    char your_section;
    float your_percentage;

    cout << "\n<---- Welcome to Student Data Entry! ---->" << endl;
    cout << "*****************************************" << endl;

    cout << "Please enter the following information:" << endl;

    cout << "1.Enter your Roll No: ";
    cin >> roll_no;

    cout << "2.Enter your Full Name: ";
    cin >> your_name;

    cout << "3.Enter your E-mail: ";
    cin >> your_email;

    cout << "4.Enter your Phone Number: ";
    cin >> your_number;

    cout << "5.Enter your Gender (M/F): ";
    cin >> gender;

    cout << "7.Enter your Section (A/B): ";
    cin >> your_section;

    cout << "8.Enter your Percentage: ";
    cin >> your_percentage;

    cout << "\n*****************************************" << endl;
    cout << "            Student Information        " << endl;
    cout << "*****************************************" << endl;

    cout << "Roll-No:        " << roll_no << endl;

    cout << "Full Name:      " << your_name << endl;

    cout << "E-Mail:         " << your_email << endl;

    cout << "Phone Number:   " << country_code << your_number << endl;

    cout << "Gender:         " << gender << endl;

    cout << "Section:        " << your_section << endl;

    cout << "Percentage:     " << your_percentage << "%" << endl;

    cout << "*****************************************" << endl;
    cout << "  Thank You For Entering Your Data!" << endl;
    cout << "*****************************************" << endl;

    return 0;
}