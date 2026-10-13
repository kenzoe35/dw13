#include "dw.h"

double compute_average(const int values[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += values[i];
    }
    return total / size;
}
