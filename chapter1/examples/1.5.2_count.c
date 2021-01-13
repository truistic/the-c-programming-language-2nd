#include <stdio.h>

int main(void) {
    long nc = 0; // It may be possible to cope with even bigger numbers by using a double
    while (getchar() != EOF) {
        ++nc;
    }
    printf("%.ld\n", nc);
    return 0;
}
