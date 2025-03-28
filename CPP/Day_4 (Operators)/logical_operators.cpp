// TODO Logical Operators:- "&&, ||, !".

#include <iostream>
using namespace std;

int main()
{
    bool num_1, num_2;

    cout << "Today We are Going to Learn about how Logical Operator Works!!" << endl;

    cout << "Enter (0/1): ";
    cin >> num_1;

    cout << "Enter (0/1): ";
    cin >> num_2;

    cout << "Using AND(&&) Operator " << endl;
    cout << num_1 << " && " << num_2 << " : " << (num_1 && num_2) << endl;

    cout << "Using OR(||) Operator " << endl;
    cout << num_1 << " || " << num_2 << " : " << (num_1 || num_2) << endl;

    cout << "Using NOT(!) Operator " << endl;
    cout << "!" << num_1 << " : " << (!num_1) << endl;

    cout << "Using NOT(!) Operator " << endl;
    cout << "!" << num_2 << " : " << (!num_2);

    return 0;
}
