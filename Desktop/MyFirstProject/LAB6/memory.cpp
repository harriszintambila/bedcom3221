#include <iostream>
using namespace std;

int main()
{   
    //variables
    int count = 5;
    short status = 2;
    char letter = 'A';
    string s = "ABC";

    //pointers
    int* pCount = &count;
    short* pStatus = &status;
    char* pLetter = &letter;
    string* pString = &s;

    return 0;
}