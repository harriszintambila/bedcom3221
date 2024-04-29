#include <iostream>
#include <string>
using namespace std;

int main ()
{
    //declare and initialize a null pointer
    int* pVariableOne = nullptr;

    // allocate memory
    pVariableOne = new int;

    //get user input
    cout << "Please, Enter the number: ";
    cin >> *pVariableOne;

    //dynamically allocate memory via pointer
    string* pVariableTwo = nullptr;

    //allocate memory
    pVariableTwo = new string;

    //get string input from user
    cout << "Please, enter the text: ";
    cin >> *pVariableTwo;

    //then assign the input to variable
//    variableTwo = *pVariableTwo;   

    cout << "The value of the dynamically allocated integer: " << *pVariableOne << "\n";
    cout << "The value of the dynamically allocated string: " << *pVariableTwo << "\n";

    //deleting the memory for reassignment if available
    delete pVariableOne;
    delete pVariableTwo;

}