#include "lib1.hpp"

int largestFactor(int value) {
    int largestFact;

    for(int i = 2; i < value; i++){
        if (value % i == 0){
            largestFact = i;
        }
    }

    return largestFact;
}