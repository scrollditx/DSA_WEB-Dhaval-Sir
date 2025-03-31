#include <iostream>
using namespace std;

int main()
{
    int age;
    string nationality;

    cout << "-------------------------------------------------" << endl;
    cout << "Welcome to the Vote Eligibility Checker!" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your nationality: ";
    cin >> nationality;

    if (age < 18)
    {
        cout << "Sorry, you must be at least 18 years old to vote.";
    }

    else if (nationality != "INDIA" && nationality != "india" && nationality != "India")
    {
        cout << "Sorry, you must be a citizen of the India to vote";
    }

    else
    {
        cout << "Congratulations!, You are eligible to vote";
    }

    cout << "-------------------------------------------------" << endl;
    return 0;
}