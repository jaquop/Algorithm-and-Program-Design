#include "text-menu-app.hpp"
using namespace std;

void TextMenuApp::run(){
    int input;
    string patientName;
    int timeSlot;
    string gender;

    do{
        while (true) {
            cout << endl;
            cout << "1. Print all patients;" << endl;
            cout << "2. Print appointments info;" << endl;
            cout << "3. Add an appointment;" << endl;
            cout << "4. Remove an appointment;" << endl;
            cout << "5. Exit." << endl;

            cout << "Please choose an option (0-5): ";
            cin >> input;
        }

        switch(input){
            case 1: appointments.printAllPatients(); //Prints all patients name, age and gender
                break;
            case 2: appointments.printAllAppointments(); //Prints all appointment time slots from 8:00 - 15:00
                break;
            case 3: //Adds appointment if conditions are met
                while (true) {
                    patientName = readName(); //Sets patient name variable to name that is read
                    if (appointments.findPatient(patientName) != -1) //Tests to see if function returns 1 or -1
                        break; //If it returns 1 it breaks the while loop
                    cout << "Patient does not exist!" << endl;  //If patientName is false, reiterates loop
                }
                while (true){
                    timeSlot = readTimeSlot();  //Sets timeSlot to timeSlot that is read
                    if(appointments.isAvailable(timeSlot)) //Tests to see if timeSlot is and empty string
                        break; //If timeSlot is available, breaks loop
                    cout << "Time slot is not available!" << endl; //If timeSlot isn't available, reiterates loop                
                }
                appointments.makeAppointment(patientName, timeSlot); //Creates appointment with real patientName and available timeSlot
                break; //Breaks the case
            case 4:
                while (true) {
                    timeSlot = readTimeSlot(); //Sets timeSlot to read Time Slot
                    if(!appointments.isAvailable(timeSlot)) //Tests if appointment time is not available
                        break; //If it is occupied, break the if statement
                    cout << "Time slot is not occupied!" << endl; //If timeSlot isn't occupied, reiterates loop
                }
                appointments.removeAppointment(timeSlot); //Removes timeSlot
                break; //Breaks the case
        }
    }while (input != 5);
} 

string TextMenuApp::readName() const{
    string name;
    cout << "Please input a patient's name: ";
    while (name.empty()){
        getline(cin, name);
    }
    return name;
}

int TextMenuApp::readTimeSlot(){
    int slot;
    while (true){
        cout << "Choose a time slot (8-15 representing time slot starting at 8:00 through 15:00): ";
        cin >> slot;
        if (slot >= 8 && slot <= 15)
            break;
        cout << "Invalid time slot: " << slot << "!" << endl;
    }
    return slot - 8;
}

TextMenuApp::TextMenuApp(Appointments &appointments) : appointments(appointments){}
