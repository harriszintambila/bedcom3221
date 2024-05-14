#include <iostream>
using namespace std;

int main()
{
    int* pExamplePointer = nullptr;
    int exampleVariable = 20;

    /*use the address operator to assign an address to the pointer*/
    pExamplePointer = &exampleVariable;

    return 0;
}