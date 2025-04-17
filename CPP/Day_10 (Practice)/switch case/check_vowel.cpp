#include <iostream>
using namespace std;

int main()
{
    char check_char;

    cout << "Enter a Character (A-Z/a-z): ";
    cin >> check_char;

    switch (check_char)
    {
    case 'A':
        cout << "Vowel";
        break;
    case 'a':
        cout << "Vowel";
        break;
    case 'E':
        cout << "Vowel";
        break;
    case 'e':
        cout << "Vowel";
        break;
    case 'I':
        cout << "Vowel";
        break;
    case 'i':
        cout << "Vowel";
        break;
    case 'O':
        cout << "Vowel";
        break;
    case 'o':
        cout << "Vowel";
        break;
    case 'U':
        cout << "Vowel";
        break;
    case 'u':
        cout << "Vowel";
        break;

    default:
        cout << "Consonants";
        break;
    }
    return 0;
}