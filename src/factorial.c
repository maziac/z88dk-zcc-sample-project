#include "factorial.h"
#include <stdio.h>
#include <arch/zxn.h>


int factorial(int fact_n) {
    int value = 1;
    for (int i = 2; i <= fact_n; i++) {
        value *= i;
    }
    return value;
}
