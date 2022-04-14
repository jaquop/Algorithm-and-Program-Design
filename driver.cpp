#include <iostream>

#include "lib1.cpp"
using namespace std;

int main(){
  int userInput;

  cout << "Please input a positive integer (input a negative value or zero to quit): ";
  cin >> userInput;

  while(userInput >= 1){
    cout << "The greatest factor (not including self) of this integer is: " << largestFactor(userInput) << endl;
    cout << "Please input a positive integer (input a negative value or zero to quit): ";
    cin >> userInput;
  }
  
  cout << "Bye!";
  return 0;
}