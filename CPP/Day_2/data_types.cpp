// DATATYPES in C++ :- int,float,double,char,char[],string[].

#include <iostream>
using namespace std;

int main()
{
    int int_number = 11; // An "integer" data type represents whole numbers, including positive, negative, and zero, but not fractional or decimal numbers.

    float float_number = 24.11; // The "float" data type are used to store positive and negative numbers with a decimal point.

    double double_number = 26.11; // A "double" data type stores double-precision floating-point numbers, which are real numbers with decimal values.

    char single_char = 'N'; // The "char" data type stores single-byte means single character.

    char multiple_chars[6] = "Hello"; // The "char[]" data type stores string of single-byte or multibyte letters means multiple characters.

    string your_name = "Bob"; // The "string" data type is a collection of characters (like alphabet letters, punctuation, numerical digits, or symbols) contained in quotation marks.'

    cout << "Int_Number: " << int_number << endl;

    cout << "Float_Number: " << float_number << endl;

    cout << "Double_Number: " << double_number << endl;

    cout << "Single_Char: " << single_char << endl;

    cout << "Multiple_Chars: " << multiple_chars << endl;

    cout << "String: " << your_name;

    return 0;
}