#include <stdio.h>

#define MAXLINE   1000
#define LONGLINE  80

int getlinelen(char line[], int maxline);

/*
 * Write a program to print all input lines that are longer than 80 characters.
 */
int main(void) {
    int len;
    char line[MAXLINE];

    while ((len = getlinelen(line, MAXLINE)) > 0) {
        if (len > LONGLINE) {
            printf("%s", line);
        }
    }
    return 0;
}

int getlinelen(char line[], int maxline) {
    int c, i, j;

    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < maxline - 2) {
            line[j] = c;
            ++j;
        }
    }
    if (c == '\n') {
        line[j] = c;
        ++j;
        ++i;
    }
    line[j] = '\0';
    return i;
}
