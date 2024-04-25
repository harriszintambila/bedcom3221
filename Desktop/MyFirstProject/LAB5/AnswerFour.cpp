/*
As an output to the console, a program prompt the user for an integer value 
between 5 and 10.
solution ensure that the input is a valid representation of an integer
conditions: if the integer value is not between 5 and 10, output to the console a statement to prompt the user for an integer value between 5 and 
10.
ensure that the integer value is between 5 and 10 before exiting the 
iteration.
After the loop iteration code block, output to the console a statement to inform the user that their input value has been accepted
*/
#include<iostream>
#include <limits>
using namespace std;

int main(){
    int input;

       do {
        //Enter a value between 5 and 10: ";
        cout << "Enter a value between 5 and 10: ";
        // prompts the user to enter integer
        cin >> input;

        // Clear the input stream and ignore any remaining characters if input is invalid
        if (!(input >= 5 && input <= 10)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSorry, you have entered an invalid number. Please try again.\n";
        }
    } while (!(input >= 5 && input <= 10));
    
    printf("Your input value(%d) has been accepted\n", input);
    return 0;
}
