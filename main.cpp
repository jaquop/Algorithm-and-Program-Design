//DO NOT MODIFY
#include "appointments.hpp"
#include "text-menu-app.hpp"
#include "data.hpp"
#include <iostream>

int main() {
    Appointments patientManager{initPatients, initPatientCount};
    TextMenuApp menu(patientManager);
    menu.run();
    return EXIT_SUCCESS;
}
