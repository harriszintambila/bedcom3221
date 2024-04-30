#include <iostream>
using namespace std;

    // function definition
    void SwapNumbers(int VarA, int VarB);
    
    //function definition
    void SwapNmubers(int VarA, int VarB){
        int temp = VarA;
        VarA = VarB;
        VarB = temp;

    }
    
int main() 
{
    int varA = 25;
    int varB = 100;

    cout << "VarA before swap: "<< varA << endl;//varA  is 25
    cout << "varB before swap: " << varB << endl; // varB is 100

    //SwapNmubers(varA, varB);
    cout << "varA after swap: " << varA << endl; // varB is 100
    cout << "VarB after swap: "<< varB << endl; //varA  is 25

    return 0;
}

    