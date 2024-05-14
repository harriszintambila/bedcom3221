#include <iostream>
using namespace std;

int main () 
{
    // initialise a pointer to null address
 float* pExamplePointer = nullptr;

// initalise a variable
 float exampleVariable = 2.5f;

// a pointer is assigned a specific address on the variable value
 pExamplePointer = &exampleVariable;

// outputs variable value
 cout << "variable data: " << exampleVariable;

// outputs pointer value
 cout << "address assigned to pointer: " << pExamplePointer;


 cout << "data accessed through pointer: "<< *pExamplePointer;

}