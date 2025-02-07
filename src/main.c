#include <stdio.h>
#include <input.h>
#include "clear-ula.h"
#include "fibonacci.h"
#include "factorial.h"


int global_var = 5;
int my_other_var = 1234;

int main(void) {
    global_var = 10;
    clear_ula();
    printf("Fibonacci(10) = %d\n", fibonacci(10));
    //printf("Factorial(10) = %d\n", factorial(10));

    my_other_var = factorial(5);

    printf("Factorial(5) = %d\n", my_other_var);

    in_wait_key();

    return 0;
}
