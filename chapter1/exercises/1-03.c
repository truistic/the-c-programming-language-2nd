#include <stdio.h>

/*
 * Modify the temperature conversion program to print a heading above the table.
 */
int main(void) {
    double fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahr  Celsius\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f  %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
