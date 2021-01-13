#include <stdio.h>

/*
 * Write a program to count blanks, tabs, and newlines.
 */
int main(void) {
    int c, nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++nb;
        } else if (c == '\t') {
            ++nt;
        } else if (c == '\n') {
            ++nl;
        }
    }
    printf("nb = %d, nt = %d, nl = %d\n", nb, nt, nl);
    return 0;
}
