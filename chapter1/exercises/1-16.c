#include <stdio.h>

#define MAXLINE 1000 // maximum input line size

int getlinelen(char line[], int maxline);

void copy(char to[], const char from[]);

/*
 * Revise the main routine of the longest-line program so it will correctly print the length of
 * arbitrary long input lines, and as much as possible of the text.
 */
int main(void) {
    int len;               // current line length
    int max;               // maximum length seen so far
    char line[MAXLINE];    // current input line
    char longest[MAXLINE]; // longest line saved here

    max = 0;
    while ((len = getlinelen(line, MAXLINE)) > 0) {
        printf("%d, %s", len, line);
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

void copy(char to[], const char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
