#include <iostream>
using namespace std;
/*When a program has same name of Global variable and the local variable, local variables take preference*/
 
// Global variable declaration:
int g = 20;
 
int main () 
{
    // Local variable declaration:
    int g = 10;
    
    cout << g;// it will output 10 on the console
    
    return 0;
}
