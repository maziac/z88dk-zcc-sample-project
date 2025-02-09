#include <arch/spectrum.h>
#include <stdio.h>
#include <input.h>
#include "clear-ula.h"
#include "fibonacci.h"
#include "factorial.h"


// ZX Spectrum color escape sequences
#define FG_GREEN "\x10\x34"
#define FG_RED "\x10\x32"
#define BG_COL "\x11\x30"   // Black
#define CLS "\x0C"  // Clear screen

uint8_t border_color = INK_BLUE;
int max_calculations = 5;
int factorial_result = 0;
int fibonacci_result = 0;

int main(void) {
    int number;

    // Setup colors
    zx_border(border_color);
    printf(FG_GREEN BG_COL);  // Text foreground and background colors
    printf(CLS); // Clear screen


    for (int i = 0; i < max_calculations; i++) {
        printf("Enter a number (or -1 to exit): ");
        scanf("%d", &number);

        if (number == -1) {
            return 0;
        }

        factorial_result = factorial(number);
        printf("Factorial(%d) = %d\n", number, factorial_result);

        fibonacci_result = fibonacci(number);
        printf("Fibonacci(%d) = %d\n", number, fibonacci_result);
    }

    // End
    printf(FG_RED "Goodbye!\n%d calculations are enough.\n", max_calculations);
    printf("Press a key...");

    // Wait on key press
    in_wait_nokey();    // Wait on previous key release
    in_wait_key();

    return 0;
}
