#include <stdio.h>

/*
 * print Fahrenheit-Celsius table
 */
int main(void) {
    double fahr, celsius;
    int lower, upper, step;

    lower = 0;
    step = 20;
    upper = 300;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
