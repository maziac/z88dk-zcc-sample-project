#include <stdio.h>
#include <input.h>
#include "clear-ula.h"
#include "fibonacci.h"
#include "factorial.h"


int global_var = 5;
int my_other_var = 1234;

int main(void) {

    int number;
    while (1) {
        printf("Please enter an integer number (or -1 to exit): ");
        scanf("%d", &number);

        if (number == -1) {
            break;
        }

        printf("Factorial(%d) = %d\n", number, factorial(number));
        printf("Fibonacci(%d) = %d\n", number, fibonacci(number));
    }

    return 0;

    global_var = 10;
    clear_ula();
    printf("Fibonacci(10) = %d\n", fibonacci(10));
    //printf("Factorial(10) = %d\n", factorial(10));

    my_other_var = factorial(5);

    printf("Factorial(5) = %d\n", my_other_var);

    printf("Please type in a number:\n");
    int input_number;
    scanf("%d", &input_number);  // Read an integer from the user
    printf("You entered: %d\n", input_number);

    printf("Please type in some characters:\n");
    while (1) {
        int c;
        // Wait on key press
        while ((c = in_inkey()) == 0);
        // Print key
        printf("%c", c);
        // Wait on key release
        while (in_inkey());
    }

//    return 0;
}
