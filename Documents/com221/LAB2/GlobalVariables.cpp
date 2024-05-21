#include <iostream>
using namespace std;

/*Global variables are declared outside of all functions 
hence acccesible by every function after its declaration*/
 
// Global variable declaration:
int g;
 
int main () 
{
    // Local variable declaration:
    int a, b;
 
    // actual initialization
    a = 10;
    b = 20;
    g = a + b;
 
    cout << g;
 
    return 0;
}
