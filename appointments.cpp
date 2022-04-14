#include <iostream>

#include "patient.hpp"
#include "appointments.hpp"

using namespace std;

// Do not modify
// constructor to initialize the patient list from data.hpp
Appointments::Appointments(Patient *patients, int patientCount) : patients(patients), patientCount(patientCount) {}

// implement methods here
int Appointments::findPatient(const string &name) const{
    //not sure what this does yet
}
void Appointments::printAllPatients() const{
    for(int i = 0; i < patientCount; i++){
        void ;
    }
}
