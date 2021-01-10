#include <stdio.h>

int main() {
    long nc = 0;
    while (getchar() != EOF) {
        ++nc;
    }
    printf("%ld\n", nc);

    // variation
    printf("variation\n");
    double n;
    for (n = 0; getchar() != EOF; ++n) // Clang-Tidy: Loop induction expression should not have floating-point type
        ; // the grammatical rules of C require that a for statement have a body
    printf("%.0f\n", n);
    return 0;
}
