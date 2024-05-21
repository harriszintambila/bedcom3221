#include <iostream>
using namespace std;

int main() 
{
    /*sizeof operator gets the size of the data types: int, bool, wchar_t, double, float, char 
    which may be modified by the following modifiers signed , unsigned, long and short
    */ 
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
 
 return 0;
}