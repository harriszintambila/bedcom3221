#include <iostream>
using namespace std;

int main(){
    float* pExamplePointer = nullptr;

    float exampleVariable = 2.5f;

    /*use the address operator to assign an address to the pointer*/
    pExamplePointer = &exampleVariable;

    // the size of the variable in memory
    cout << "Size of variable: " << sizeof(exampleVariable)<< endl;
        
    return 0;
}