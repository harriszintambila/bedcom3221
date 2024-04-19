/*
This source code uses a for loop statement to iterate through each element of an array.
The loop is checking for every element that starts with letter “B” in the array
output onto the console each one of the elements that start with the letter “B”.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    //create and initialize array of size 8
    string elementArray[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    //loop into elementArray array
    int arraySize = sizeof(elementArray) / sizeof(elementArray[0]);

    // iterate through the array
    cout<< "The elements starting with letter 'B' are: \n";
    for(int i =0; i < arraySize;i++){
        // take first letter
        const string character = elementArray[i];
        const char firstCharacter = character[0];

        // check if first letter is 'B'
        if(firstCharacter == 'B'){
            cout<< character << endl;
        }
        
    }
    
    return 0;
}