//? Employee Data.
//! Note:-//Use 'underscore' sign("_") instead of "space".
#include <iostream>
#define join_date "01-05-2011"
#define country_code "+91"
using namespace std;

int main()
{
    int emp_id;
    string emp_name, work_email, emp_number, emp_department, emp_status, job_type;
    char gender;

    cout << "<---- Welcome to Employee Data Entry! ---->" << endl;
    cout << "*****************************************" << endl;

    cout << "Please enter the following information:" << endl;

    cout << "1.Enter your Employee_ID: ";
    cin >> emp_id;

    cout << "2.Enter your Full Name: ";
    cin >> emp_name;

    cout << "3.Enter your E-mail: ";
    cin >> work_email;

    cout << "4.Enter your Phone Number: ";
    cin >> emp_number;

    cout << "5.Enter your Gender (M/F): ";
    cin >> gender;

    cout << "6.Enter your Job Status (Active/On_Leave/Terminated): ";
    cin >> emp_status;

    cout << "7.Enter your Job Type (Full_Time/Part_Time/Contract): ";
    cin >> job_type;

    cout << "*****************************************" << endl;
    cout << "            Employee Information        " << endl;
    cout << "*****************************************" << endl;

    cout << "Employee-ID:        " << emp_id << endl;

    cout << "Full Name:          " << emp_name << endl;

    cout << "Work E-Mail:        " << work_email << endl;

    cout << "Phone Number:       " << country_code << emp_number << endl;

    cout << "Gender:             " << gender << endl;

    cout << "Joining Date:       " << join_date << endl;

    cout << "Job Status:         " << emp_status << endl;

    cout << "Job Type:           " << job_type << endl;

    return 0;
}