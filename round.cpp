#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double userVal;
    double decimalPlaces;

    cout << "Input user value: ";
    cin >> userVal;
    cout << "Input decimal Places: ";
    cin >> decimalPlaces;
    double newVal = static_cast<int>((userVal * (pow(10, decimalPlaces))) + 0.5);
    newVal = newVal/(pow(10, decimalPlaces));
    cout << "Round Value is: " << newVal;
    
    
    return 0;    
}