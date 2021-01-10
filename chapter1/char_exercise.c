#include <stdio.h>

# define LAST_BLANK 0
# define LAST_OTHER 1

int main() {
    int c, flag = LAST_OTHER, nb = 0, nt = 0, nn = 0;
    while ((c = getchar()) != EOF) {
        // count
        if (c == ' ') {
            ++nb;
        } else if (c == '\t') {
            ++nt;
        } else if (c == '\n') {
            ++nn;
        }

        // blank
        if (c == ' ') {
            if (flag == LAST_BLANK) {
                continue;
            } else {
                flag = LAST_BLANK;
            }
        } else {
            flag = LAST_OTHER;
        }

        // transform
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\n') {
            putchar('\\');
            putchar('n');
        } else if (c == ' ') {
            putchar('\\');
            putchar('0');
        } else {
            putchar(c);
        }
    }
    printf("nb = %d  nt = %d  nn = %d\n", nb, nt, nn);
    return 0;
}
