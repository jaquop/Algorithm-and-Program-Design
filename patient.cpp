#include <iostream>
#include <string>

#include "patient.hpp"
using namespace std;

//Worried that all of this is wrong
Patient::Patient(const string &name, int age, const std::string &gender)
    : name(name), age(age), gender(gender) {}

string Patient::getName() const{ return name; }

void Patient::printInfo() const{
    cout << "Patient name: " << name << endl;
    cout << "Patient age: " << age << endl;
    cout << "Patient gender: " << gender << endl;
}