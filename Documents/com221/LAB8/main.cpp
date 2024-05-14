//#pragma once
#include <iostream>
#include "Person.h"

int main(){
    Person Jane = Person(12, "Jane", 60.0f);
    Person John = Person(30, "John", 75.0f);

    float totalWeight = Jane + John;

    cout << "Total weight: " << totalWeight << endl;

    return 0;
}