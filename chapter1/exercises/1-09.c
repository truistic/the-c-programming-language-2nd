#include <stdio.h>

#define NOT_BLANK 'a'

/*
 * Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
 */
int main(void) {
    int c, lastc;

    lastc = NOT_BLANK;
    while ((c = getchar()) != EOF) {
        if (c != ' ' || lastc != ' ') {
            putchar(c);
        }
        lastc = c;
    }
    return 0;
}
