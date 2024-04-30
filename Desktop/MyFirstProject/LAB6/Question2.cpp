#include <iostream>
#include <string>
using namespace std;

//function declaration
void promptUser(int& rows, int& columns);

int main() {
    int numberOfRows = 0;
    int numberOfColumns = 0;

    //call promptUser function
    promptUser(numberOfRows, numberOfColumns);
    double** pTwoDimensionArray = new double*[numberOfRows];

    // iterating through the row array
    for (int i = 0; i < numberOfRows; ++i) {
        pTwoDimensionArray[i] = new double[numberOfColumns];
    }

    // assigning values to the array
    cout << "Enter array values: " << endl;
    for (int i = 0; i < numberOfRows; ++i) {
        for (int j = 0; j < numberOfColumns; ++j) {
            cin >> pTwoDimensionArray[i][j];
        }
    }

    // output the array elements
    cout << "The elements are: " << endl;
    for (int i = 0; i < numberOfRows; ++i) {
        for (int j = 0; j < numberOfColumns; ++j) {
            cout << pTwoDimensionArray[i][j] << " ";
        }
        cout << endl;
    }

    // deallocating dynamic memory of each element of the array
    for (int i = 0; i < numberOfRows; ++i) {
        delete[] pTwoDimensionArray[i];
    }

    //deallocating dynamically allocated memory of the whole array
    delete[] pTwoDimensionArray;

    return 0;
}

//function definition
void promptUser(int& numberOfRows, int& numberOfColumns){
    // user input of array dimensions
    cout << "How many rows you want to enter(must not exceed 3): ";
    cin >> numberOfRows;

    //check if the input is right
    if (numberOfRows > 3 || numberOfRows <= 0) {
        cout << "Please re-enter (must be from 1 to 3): " << endl;
        //return 1;
    }

    //request user input of columns dimension
    cout << "Enter maximum columns: ";
    cin >> numberOfColumns;

    if (numberOfColumns > 3 || numberOfColumns <= 0) {
        cout << "Columns must be 1 - 3:" << endl;
        //return 1;
    }
}