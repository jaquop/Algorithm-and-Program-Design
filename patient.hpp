#ifndef PATIENT_HPP
#define PATIENT_HPP

#include <iostream>
#include <string>


class Patient {
  string name;
  int age;
  string gender;
 public:
  Patient(const string &name, int age, const string &gender);
  std::string getName() const;

  /*
    print information of a patient in a format like:

    Patient name: Alan Harry
    Patient age: 24
    Patient gender: Male
   */
  void printInfo() const;
};

#endif  // PATIENT_HPP
