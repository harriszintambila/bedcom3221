#include<iostream>
using namespace std;

//function declaration menu for the shapes
void menu();

// function definiton for the shape
double areaOfSquare(double length);
double areaOfRectangle(double length, double width);
double areaOfTriangle(double base, double height);

// menu function definition
void menu(){
    cout<<"\n\nPlease select the shape of the area to calculate"<<endl;
    cout<<"1. Square\n";
    cout<<"2. Rectangle\n";
    cout<<"3. Triangle\n";
    cout<<"4. Quit Program\n";
    cout<<"\nEnter Selection: ";
}

// areaOfSquare function definition
double areaOfSquare(double length)
{
    return areaOfRectangle(length, length);// areaOfSquare calls areaOfRectangle
}

// areaOfRectangle function definition
double areaOfRectangle(double length, double width)
{
    return length * width;
}

// areaOfTriangle function definition
double  areaOfTriangle(double base, double height){
    const double half = 0.5;
    return half * base * height;
}

// main function
int main(){
    while(true)
    {
        int input;
        menu();

        cin>>input;
        while (!(input >= 1 && input <= 4)){
            printf("Your input was: %d which is an invalid input \nPlease enter a valid input!!!\n", input);
            menu();
            cin>>input;
        }

        if(input == 1){
            double length;
            cout<<"Enter length: ";
            cin >> length;
            cout<<"Area is "<<areaOfSquare(length);
        }

        if(input == 2){
            double length;
            double width;
            cout<<"Enter length: ";
            cin>>length;
            cout<<"Enter width: ";
            cin>>width;
            cout<<"Area is "<<areaOfRectangle(length, width);
        }

        if(input ==3){
            double base;
            double height;
            cout<<"Enter base: ";
            cin>>base;
            cout<<"Enter height: ";
            cin>>height;
            cout<<"Area is "<<areaOfTriangle(base, height);
        }

        if(input==4)
                break;
    }

    return 0;
}
