#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//function declaration for vowel count,word count and word reverse
int vowels(string &str);
int wordCount(string &word);
string reverse(string& text);

//function definition
string reverse(string& text)
{
        string reverseText;

        //iterating over characters of the input strinin reverse order

        for(int i=text.length()-1;i>=0;i--){
            // actual reversing and assign it to reverseText
            reverseText +=text[i]; 
        }
        return reverseText;
}

int vowels(string &str)
{
    int count=0;
    for(char ch: str){
        switch(toupper(ch))// checking the second letter and convert to upper case
        {
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
    bool inword=false;
    for(char ch:word)
        {
            if(isspace(ch))
            {
            inword=false;
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
    else
    {
        //using while loop together with getline() function to read the file line by line 
        while(getline(myFile,fileData))
        {
            cout<< fileData<<endl;
        }else if(!inword){
            count++;
            inword=true;
        }
    return count;
    }
    //myFile.close();
        cout<<"Number of our string vowels is :"<<vowels(fileData)<<endl; //invoking function to count number of vowels
        cout<<"Number of string words count is :"<<wordCount(fileData)<<endl; //invoking function to count number of words
        cout<<"reversing the text will look like :"<<reverse(fileData)<<endl; //invoking reverse text function 

    return 0;
}