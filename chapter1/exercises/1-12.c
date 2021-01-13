#include <stdio.h>

#define IN  1
#define OUT 0

/*
 * Write a program that prints its input one word per line.
 */
int main(void) {
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                putchar('\n'); // finish the word
                state = OUT;
            }
        } else if (state == OUT) {
            state = IN; // beginning of a word
            putchar(c);
        } else {
            putchar(c); // inside a word
        }
    }
    return 0;
}
