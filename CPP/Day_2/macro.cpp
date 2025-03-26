//* Doing 'constant' using "MACRO".

#include <iostream>
#define NUM 10 //? defining MACRO : //"#define MACRO_NAME macro_value."
using namespace std;

int main()
{
    cout << NUM; //! printing MACRO's value
    return 0;
}