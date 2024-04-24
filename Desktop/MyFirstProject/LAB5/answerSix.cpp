#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//function declaration for vowel count,word count and word reverse
int vowels(string &str);
int wordCount(string &word);
string reverse(string & text);

// function definition
string reverse(string& text){
        string reverseText;

        //iterating over characters in the file in reverse order
        for(int i=text.length()-1;i>=0;i--)
        {
            //assigning each reversed word
            reverseText +=text[i]; 
        }
        return reverseText;
        
    }
int vowels(string &str){
    int count=0;
        for(char ch: str){
            switch(toupper(ch)){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                count++;
                break;
                default:
                break;
            }
        }
        return count;
        }

int wordCount(string &word)
{
    int count=0;
    bool inword=false;// check if a word is already counted
        for(char ch:word)
        {
            if(isspace(ch)){
                inword=false;
            }else if(!inword){
                count++;
                inword=true;
                return count;
            }
        }
}
int main()
{
        string fileData;
        ifstream myFile;
        myFile.open("text.txt", ios::in);
        if(!myFile)
        {
            cout<<"File not created"<<endl;
        }
        else{
            
        //getline() function read the file line by line 
        while(getline(myFile,fileData)){
            cout<<fileData<<endl;
        }
        cout<<"Number of our string vowels is : "<<vowels(fileData)<<endl; //invoking function to count number of vowels
        cout<<"Number of string words count is : "<<wordCount(fileData)<<endl; //invoking function to count number of words
        cout<<"reversing the text will look like : "<<reverse(fileData)<<endl; //invoking reverse text function 
        return 0;
    }
}