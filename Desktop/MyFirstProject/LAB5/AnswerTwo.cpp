/*
This program allows a user subscribed to a service
check if the subscription is active or has expired by generating random number between 0 and 11
*/
#include<iostream>
//#include<ctime>
using namespace std;


int main(){
    //seeding random number
    srand(time(NULL));

    // generate rand between 0 - 11 and store in daysUntilExpiration variable
    int daysUntilExpiration = rand() % 12;
    cout<<daysUntilExpiration<<endl; //output random number

    switch (daysUntilExpiration)
    {
        // if the generated number is 0, all days expired
    case 0:
        cout<<"Your subscription has expired."<<endl;
        break;
        
        //expires in one day if generated number == 1
    case 1:
        cout<<"Your subscription expires within a day!"<<endl;
        cout<<"Renew now and save 20%!"<<endl;
        break;

        // the case checks if the generated number is less than or equal to 5 (2,3,4,5) condition
    case 2:case 3:case 4:case 5:
        cout<<"Your subscription expires in " << daysUntilExpiration <<" days"<<endl;
        cout<<"Renew now and save 10%!"<<endl;
        break;

        // the case checks if the generated number is less than or equal to 10 condition
    case 6:case 7:case 8:case 9:case 10:
        cout<<"Your subscription will expire soon. Renew now!" << endl;
        break;

        // when the generated number is not less than 10 and does'nt expire in 10 days
    default:
        cout<<"You have an active subscription."<<endl;
        break;
    }

    return 0;
}