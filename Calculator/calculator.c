#include "calculator.h"
#include <stdio.h>

int add(const int a, const int b) {
    return a + b;
}

int subtract(const int a, const int b) {
    return a - b;
}


int multiply(const int a, const int b) {
    return a * b;
}

int divide(const float a, const float b) {
    if (b == 0) return 0;

    int res = a / b;
    return res;
}