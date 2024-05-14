#include <iostream>
using namespace std;

int main()
{   
    //null pointer
    float* pExamplePointer = nullptr;
    float exampleVariable = 2.5f;

    /*use the address operator to assign an address to the pointer*/
    pExamplePointer = &exampleVariable;

    //another variable
    float anotherVariable = 50.0f;

    //reassign the pointer with a different address
    pExamplePointer = &anotherVariable;
    
    return 0;
}