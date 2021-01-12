#include <stdio.h>

/*
 * Experiment to find out what happens when printf's argument string contains \c, where c
 * is some character not listed above.
 */
int main(void) {
    printf("hello, world\y");
    printf("hello, world\7");
    printf("hello, world\?");
    return 0;
}
