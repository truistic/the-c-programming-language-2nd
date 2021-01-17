#include <stdio.h>

#define MAXLINE 1000

int getlinelen(char line[], int maxline);

int removewhite(char line[]);

/*
 * Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
 */
int main(void) {
    char line[MAXLINE];

    while ((getlinelen(line, MAXLINE)) > 0) {
        if (removewhite(line) > 0) {
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

int removewhite(char line[]) {
    int i;

    i = 0;
    while (line[i] != '\n') {
        ++i;
    }
    --i;
    while (i >= 0 && (line[i] == ' ' || line[i] == '\t')) {
        --i;
    }
    if (i >= 0) {
        ++i;
        line[i] = '\n';
        ++i;
        line[i] = '\0';
    }
    return i;
}
