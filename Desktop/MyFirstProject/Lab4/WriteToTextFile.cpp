#include <iostream>
#include <fstream>
using namespace std;

int main ()
    {
    //create a file and output a text file
    ofstream myfile("exampleFile.txt");

    if(myfile.is_open()){//without this the program crushes terminate ! to negate the file
        //myfile << "This is a line.\n";

        //myfile << "This is another line.\n";
        myfile << "Hello My File.!" << endl;
    
    //close the file
    myfile.close();
    }
    else
        cout << "ERROR...!!" << endl; //or cerr outputs the error occured

    return 0;
}