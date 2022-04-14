#include "my-math.hpp"
#include <cstdlib>
#include <cassert>
#include <iostream>
#include <math.h>

using namespace std;

const double EPSILON = 0.00001;

// Check if two double value is close to equal
bool isClose(double val1, double val2);

int main() {
  assert(isClose(roundToDecimal(5.231232, 2), 5.23));
  assert(isClose(roundToDecimal(5.2312332, 3), 5.231));
  assert(isClose(roundToDecimal(51.2312332, 3), 51.231));
  assert(isClose(roundToDecimal(0.2312332, 3), 0.231));
  cout << "Succeed! All assertions clear!" << endl;
  return EXIT_SUCCESS;
}

bool isClose(double val1, double val2) {
  return abs(val1 - val2) < EPSILON;
}