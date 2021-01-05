#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

/*
 * print Fahrenheit-Celsius table
 */
int main() {
    printf("fahr celsius\n");
    int fahr = LOWER;
    while (fahr <= UPPER) {
        printf("%4.0d %7.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
        fahr += STEP;
    }

    // variation
    printf("\n");
    int f; // GCC does not allow variable declarations in for loop initializers before C99
    for (f = LOWER; f <= UPPER; f += STEP) {
        printf("%4d %7.1f\n", f, (5.0 / 9.0 * (f - 32)));
    }

    return 0;
}
