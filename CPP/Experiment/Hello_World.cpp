// Including Header File

#include <iostream> //Iostream = Input / Output Stream
using namespace std; // Using "std" means Standard Object

int main()
{ // Main Function Start

    cout << "Hello World" << endl; // "Cout" statement used for "output"

    int number;
    string name;
    char letter;
    float decimal_number;
    bool right;

    cout << "Type a Number: ";
    cin >> number;
    cout << "The number you entered is " << number << endl;

    cout << "Type Your Name: ";
    cin >> name;
    cout << "The Name you entered is " << name << endl;

    cout << "Type any letter: ";
    cin >> letter;
    cout << "The letter you entered is " << letter << endl;

    cout << "Type any floating point number: ";
    cin >> decimal_number;
    cout << "The floating point number you entered is " << decimal_number << endl;

    cout << "Type any boolean value: ";
    cin >> right;
    cout << "The boolean value you entered is " << right << endl;

    return 0; // return 0 in the main function means that the program executed successfully
}