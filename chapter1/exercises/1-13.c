#include <stdio.h>

#define MAXHIST 15 // max length of histogram
#define MAXWORD 11 // max length of a word
#define IN      1  // inside a word
#define OUT     0  // outside a word

/*
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 */
int main(void) {
    int c, i, nc, state;
    int len;             // length of each bar
    int maxvalue;        // maximum value for wl[]
    int ovflow;          // number of overflow words
    int wl[MAXWORD];     // word length counters

    nc = 0;              // number of chars in a word
    ovflow = 0;          // number of words >= MAXWORD
    state = OUT;
    for (i = 0; i < MAXWORD; ++i) {
        wl[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            if (nc > 0) {
                if (nc < MAXWORD) {
                    ++wl[nc];
                } else {
                    ++ovflow;
                }
            }
            nc = 0;
        } else if (state == OUT) {
            state = IN;
            nc = 1;
        } else {
            ++nc;
        }
    }

    maxvalue = 0;
    for (i = 0; i < MAXWORD; ++i) {
        if (wl[i] > maxvalue) {
            maxvalue = wl[i];
        }
    }

    for (i = 0; i < MAXWORD; ++i) {
        printf("%5d - %5d : ", i, wl[i]);
        if (wl[i] > 0) {
            if ((len = wl[i] * MAXHIST / maxvalue) <= 0) {
                len = 1;
            }
        } else {
            len = 0;
        }
        while (len > 0) {
            putchar('*');
            --len;
        }
        putchar('\n');
    }
    if (ovflow > 0) {
        printf("There are %d words >= %d\n", ovflow, MAXWORD);
    }
    return 0;
}
