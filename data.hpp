//DO NOT MODIFY
#ifndef DATA_HPP
#define DATA_HPP

#include "patient.hpp"

Patient initPatients[] = {{"Alan Harry", 24, "Male"},
                          {"Ching Peppard", 32, "Male"},
                          {"Lorelei Saad", 18, "Female"},
                          {"Phoebe Schild", 23, "Female"},
                          {"Tomasa Smither", 41, "Male"},
                          {"Jessie Denicola", 40, "Female"},
                          {"Keenan Hershberger", 69, "Male"},
                          {"Apolonia Axtell", 52, "Female"},
                          {"Bessie Boller", 78, "Female"},
                          {"Logan Beverage", 64, "Male"},
                          {"Toby Dill", 58, "Male"},
                          {"Bryanna Luft", 67, "Female"},
                          {"Fernande Weatherman", 74, "Male"},
                          {"Marcell Coombes", 65, "Male"}};
int initPatientCount = sizeof(initPatients) / sizeof(Patient);

#endif //DATA_HPP
