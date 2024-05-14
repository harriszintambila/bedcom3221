#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    //create a file and output a text file
    ofstream myfile("exampleFile.texts");

    //close the file
    myfile.close();

    return 0;
}