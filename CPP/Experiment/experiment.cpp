//experimenting only 

#include <iostream>
using namespace std;

int main()
{
    int age, years;
    cout << "Enter your Current Age: ";
    cin >> age;
    cout << "Your current age is " << age << endl;

    cout << "Enter some years you want to add in your current age: ";
    cin >> years;

    int future_age = age + years;
    cout << "Your current age is " << age << " and your future age will be " << future_age;
    return 0;
}
