#ifndef APPOINTMENTS_HPP
#define APPOINTMENTS_HPP

#include "patient.hpp"
#include <iostream>
using namespace std;

class Appointments {
  // array of 8 patient names
  // you can use empty string as a place holder for not occupied time slots
  string appointments[8];
  Patient *patients;  // do not worry about changing it, just use as an array
  int patientCount;  // number of patients
 public:
  Appointments(Patient *patients, int patientCount);
  // find the patient in the list
  // return -1 if not found
  int findPatient(const string &name) const;
  // print all patients in the format demonstrated in the sample run
  //   when option 1 is chosen
  void printAllPatients() const;
  // create an appointment
  // no validation needed
  // validation should be already done before calling this method
  void makeAppointment(string name, int timeSlot);
  // print all time slots in the format demonstrated in the sample run
  //   when option 2 is chosen
  void printAllAppointments();
  // check if a time slot is open for appointments
  bool isAvailable(int timeSlot);
  void removeAppointment(int timeSlot);
};

#endif //APPOINTMENTS_HPP
