#include <iostream>
using namespace std;

int main()
{
    string e_name, e_id, e_dept, e_designation;

    double basic_salary, hra, da, ta, i_tax, ma, pt, pf, total_allowances, total_expences, gross, net_salary;

    cout << endl;
    cout << "Enter your Name: ";
    cin >> e_name;

    cout << "Enter your E_ID: ";
    cin >> e_id;

    cout << "Enter your Department Name: ";
    cin >> e_dept;

    cout << "Enter your Designation: ";
    cin >> e_designation;

    cout << "Enter your Basic Salary: ";
    cin >> basic_salary;

    hra = 800;
    da = 0.15 * basic_salary;
    ta = 0.10 * basic_salary;
    ma = 2000;
    total_allowances = hra + da + ta + ma;
    i_tax = 0.15 * basic_salary;
    pt = 200;
    pf = 0.07 * basic_salary;
    total_expences = i_tax - pt - pf;
    gross = total_allowances - total_expences;
    net_salary = basic_salary + gross;

    cout << " --------------------------- " << endl;
    cout << "Employee's ID:                 " << e_id << endl;
    cout << "Employee's Name:               " << e_name << endl;
    cout << "Employee's Department:         " << e_dept << endl;
    cout << "Employee's Designation:        " << e_designation << endl;
    cout << " --------------------------- " << endl;
    cout << "Employee's Basic Salary:       " << basic_salary << " Rs" << endl;
    cout << " --------------------------- " << endl;
    cout << "Employee's HRA:                " << hra << " Rs" << endl;
    cout << "Employee's DA:                 " << da << " Rs" << endl;
    cout << "Employee's TA:                 " << ta << " Rs" << endl;
    cout << "Employee's MA:                 " << ma << " Rs" << endl;
    cout << " --------------------------- " << endl;
    cout << "Total allowances:              " << total_allowances << " Rs" << endl;
    cout << " --------------------------- " << endl;
    cout << "Employee's Incomr Tax:         " << i_tax << " Rs" << endl;
    cout << "Employee's Professtional Tax:  " << pt << " Rs" << endl;
    cout << "Employee's Provident Fund:     " << pf << " Rs" << endl;
    cout << " --------------------------- " << endl;
    cout << "Total Expences:                " << total_expences << " Rs" << endl;
    cout << " --------------------------- " << endl;
    cout << "Total Gross Profit:            " << gross << " Rs" << endl;
    cout << " --------------------------- " << endl;
    cout << "Net Salary Amount:             " << net_salary << " Rs";
    return 0;
}