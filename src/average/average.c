#include "average.h"

float average(float arr[], unsigned int size) {
    // if (size == 0)
    // {
    //     return 0.0;
    // }

    float sum = 0;

    for(unsigned int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / (float)size;
}