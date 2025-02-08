#include <arch/spectrum.h>
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
        *zx_cxy2aaddr(10, 5) = PAPER_GREEN | INK_RED;
        printf("\x0C");
        printf("%c%c", 16, 50); // INK Red (50 = '2' + 48)
        printf("Enter a number (or -1 to exit): ");
        scanf("%d", &number);

        if (number == -1) {
            break;
        }

        printf("Factorial(%d) = %d\n", number, factorial(number));
        printf("Fibonacci(%d) = %d\n", number, fibonacci(number));
        printf("\x0C");
    }

    return 0;
}
