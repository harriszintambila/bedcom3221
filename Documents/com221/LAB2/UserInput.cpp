#include <iostream>
using namespace std;

int main() 
{ 
    // cin is a predefined object that reads data from an standard input device such keyboard. Used together with extraction operator ">>" 
    int x; 
    cout << "Type a number: "; // Type a number and press enter 
    cin >> x; // Get user input from the keyboard 
    cout << "Your number is: " << x; 
    return 0; 
} 
