#include <iostream>
using namespace std;

int main() 
{
    //use const keyword followed by data type and constant variable name in UPPERCASE. Particularly these are symbolic constants.
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    int area; 
    
    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}
