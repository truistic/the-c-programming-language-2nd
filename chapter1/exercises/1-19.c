#include <stdio.h>

#define MAXLINE 1000

int getlinelen(char line[], int maxline);

void reverse(char s[]);

/*
 * Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time.
 */
int main(void) {
    char line[MAXLINE];

    while (getlinelen(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
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

void reverse(char s[]) {
    int i, j;
    char temp;

    i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    --i;
    if (s[i] == '\n') {
        --i;
    }
    j = 0;
    while (j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}
