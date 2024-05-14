#pragma once
#include <string>

using namespace std;

class Person
{
    public:
        Person();
        Person(const float newWeight, const std::string newFirstName, const int newAge);
        Person(float newWeight);

        ~Person();

        float GetWeight();

    void SetWeight(float  weight);

    void SetFirstName(string first);

    void SetAge(int age);


        //overload the add operator
        bool operator< (const Person& otherPerson);
        bool operator> (const Person& otherPerson);
        bool operator== (const Person& otherPerson);
        bool operator!= (const Person& otherPerson);

    private:
        float nWeight;
        string mFirstName;
        int mAge;

};