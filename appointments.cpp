#include <iostream>

#include "appointments.hpp"

using namespace std;

// Do not modify
// constructor to initialize the patient list from data.hpp
Appointments::Appointments(Patient *patients, int patientCount) : patients(patients), patientCount(patientCount) {}

// implement methods here
int Appointments::findPatient(const string &name) const{
    for(int i = 0; i < patientCount; i++){
        if(patients[i].getName() == name){
            return i;
        }
        return -1;
    }
}

void Appointments::printAllPatients() const{
    for(int i = 0; i < patientCount; i++){
        cout << "Patient " << i + 1 << ":" << endl;
        patients[i].printInfo();
        cout << endl;        
    }
}

void Appointments::makeAppointment(string name, int timeSlot){
    appointments[timeSlot] = name;
}

void Appointments::printAllAppointments(){
    string name;
    for(int i = 0; i < 8; i++){
        name = appointments[i];
        if(name.empty()){
            name = "Not occupied";
        }
        cout << "Time slot: " << (i) << ":00 " << name << endl;
    }
}

bool Appointments::isAvailable(int timeSlot){
    return appointments[timeSlot].empty();
}

void Appointments::removeAppointment(int timeSlot){
    appointments[timeSlot] = "";
}