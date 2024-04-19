/*
This program allows a user subscribed to a service
check if the subscription is active or has expired by generating random number between 0 and 11
*/
#include<iostream>
#include<ctime>//preprocessor directive current random time
using namespace std;

int main(){
    //seeding random number
    srand(time(NULL));

    // generate rand between 0 - 11
    int daysUntilExpiration = rand() % 12;// calling random function
    cout<<daysUntilExpiration<<endl; //output random generated number

    if(daysUntilExpiration>10){
        cout<<"You have an active subscription."<<endl;
        
    }else if(daysUntilExpiration == 0){
        cout<<"Your subscription has expired."<<endl;
        
    }else if(daysUntilExpiration <= 1){
        cout<<"Your subscription expires within a day!"<<endl;
        cout<<"Renew now and save 20%!\n";
        
        // if the days are less than or equal to 5(2,3,4,5) 
    }else if(daysUntilExpiration <= 5){
        cout<<"Your subscription expires in " << daysUntilExpiration <<" days"<<endl;
        cout<<"Renew now and save 10%!\n";
      
      // if user's subscription will expire in less than or equal to 10 days 
    }else{
        cout<<"Your subscription will expire soon. Renew now!" << endl;
    }

    return 0;
}
