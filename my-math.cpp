#include <iostream>
#include <math.h>

#include "my-math.hpp"
using namespace std;

double roundToDecimal(double value, int numDecPlaces){
    double newVal = static_cast<int>((value * (pow(10, numDecPlaces))) + 0.5);
    newVal = newVal/(pow(10, numDecPlaces));
    return newVal;
}