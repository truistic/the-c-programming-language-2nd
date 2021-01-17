#include <stdio.h>

#define MAXLINE 1000 // maximum input line size

int getlinelen(char line[], int maxline);

void copy(char to[], const char from[]);

int main(void) {
    int len;               // current line length
    int max;               // maximum length seen so far
    char line[MAXLINE];    // current input line
    char longest[MAXLINE]; // longest line saved here

    max = 0;
    while ((len = getlinelen(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) { // there was a line
        printf("%s", longest);
    }
    return 0;
}

int getlinelen(char line[], int maxline) {
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], const char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
