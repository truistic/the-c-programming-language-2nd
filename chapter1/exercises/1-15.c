#include <stdio.h>

double celsius(double fahr);

/*
 * Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
 */
int main(void) {
    double fahr;
    int lower, upper, step;

    lower = 0;
    step = 20;
    upper = 300;

    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, celsius(fahr));
        fahr = fahr + step;
    }

    return 0;
}

double celsius(double fahr) {
    return (5.0 / 9.0) * (fahr - 32);
}
