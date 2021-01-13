#include <stdio.h>

int main(void) {
    int fahr; // GCC does not allow variable declarations in for loop initializers before C99
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    return 0;
}