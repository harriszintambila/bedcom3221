#include <iostream>
using namespace std;
 
int main () 
{
    /*Local variables are reserved memory locations that store values
    *Are declared in a function or block and not known to outside functions 
    Local variable declaration:
    */
    int a, b;
    int c;
 
    // actual initialization
    a = 10;
    b = 20;
    c = a + b;
 
    cout << c;// display the output to console
 
    return 0;
}