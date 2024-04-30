#include <iostream>
using namespace std;

    // function definition
    int SwapNumbers(int varA, int varB);

    //function definition
    void SwapNmubers(int varA, int varB){ //int& varA, int& varB
        //swapping by references
        int& rVarA = varA;
        int& rVarB = varB;
        // swapping
        int& rTemp = rVarA;
        rVarA = rVarB;
        rVarB = rTemp;

    }

int main() 
{
    int varA = 25;
    int varB = 100;

    cout << "VarA before swap: "<< varA << endl;//varA  is 25
    cout << "varB before swap: " << varB << endl; // varB is 100

    SwapNmubers(varA, varB);
    cout << "varB after swap: " << varB << endl; // varB is 100
    cout << "VarA after swap: "<< varA << endl; //varA  is 25

    return 0;
}