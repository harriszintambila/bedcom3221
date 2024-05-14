#pragma once
#include <string>
#include "Person.h"

Person::Person()
{
    nWeight = 0.0;
    mFirstName = "";
    mAge = 0;
}
//Person::Person(const float newWeight){
Person::Person(float newWeight, const std::string newFirstName, const int newAge)
{
    nWeight = newWeight;
    mFirstName = newFirstName;
    mAge = newAge;   
}

Person::~Person()
{

}
float Person::GetWeight() {
    return nWeight;
}
void Person::SetFirstName(string first) {
    mFirstName = first;
}
void Person::SetAge(int age) {
    mAge = age;
}
void Person::SetWeight(float weight) {

    nWeight = weight;
}

// Overload > operator
bool Person::operator>(const Person& otherperson) {  
}
//overload <
bool Person::operator<(const Person& otherperson){

}
