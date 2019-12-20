//
// Created by Yevgeny Lashtchionov on 18/12/2019.
//

#include <stdio.h>
#include <string.h>

#define LINE 256
#define  LINES 1000
#define WORD 30

int getLine(char s[]) {
    int c, j = 0;
    while ((c = getchar()) != EOF && c != '\n' && j < LINE) {
        s[j] = c;
        j++;
    }
    s[j] = '\0';
    if (j == 0) {
        return -1;
    } else {
        return j;
    }
}

int getWord(char w[]) {
    int c, j = 0;
    while ((c = getchar()) != EOF && c != '\t' && c != ' ' && c != '\n' && j < WORD) {
        w[j] = c;
        j++;
    }
    w[j] = '\0';
    return j;
}

int substring(char *str1, char *str2) {
    // Check if str2 is a substring of str

    if (!*str2) // empty string
        return 1;

    char *p1, *p2, *p3;
    int i = 0, j = 0, flag = 0;
    p1 = str1;
    p2 = str2;

    for (i = 0; i < strlen(str1); i++) {
        if (*p1 == *p2) {
            p3 = p1;
            for (j = 0; j < strlen(str2); j++) {
                if (*p3 == *p2) {
                    p3++;
                    p2++;
                } else
                    break;
            }
            p2 = str2; // return to index 0 of str2
            if (j == strlen(str2)) {
                flag = 1;
                //printf("\nSubstring found at index : %d\n",i);
                return 1;
            }
        }
        p1++;
    }
    return 0; // Substring Not Founded
}

void print_lines(char *str) {
    int lineIndex = 0;
    char line[LINE] = "";
    while (getLine(line) && lineIndex < LINES) {
        if (substring(line, str)) {
            puts(line);
        }
        lineIndex++;
    }
}

void removeChars(char *s, int i, int len, char *newStr) {
    char str1[WORD] = "";
    char str2[WORD] = "";
    int j;
    for (j = 0; j < i; j++) {
        str1[j] = *(s + j);
    }
    str1[j] = '\0';
    char *p1 = str1;
    while (*p1) {
        p1++;
    }
    char *strPtr = (s + j);
    while (*strPtr) {
        strPtr++;
        *p1 = *strPtr;
        p1++;
    }
    p1 = str1;
    char *p2 = newStr;
    while (*p1) {
        *p2 = *p1;
        p2++;
        p1++;
    }
}

int similar(char *s, char *t) {
    int lenS = 0, lenT = 0;
    char *sP = s, *tP = t;
    int j = 0;
    while (*sP != '\0') {
        sP++;
        lenS++;
    }
    while (*tP != '\0') {
        tP++;
        lenT++;
    }
    if (lenS == lenT) { // Maybe the same strings.
        if (substring(s, t)) {
            return 1;
        } else {
            return 0;
        }
    }
    if (lenS >= lenT) { // If length of s is greater.
        while (j <= lenT) {
            int index = j;
            char temp[] = "";
            removeChars(s, index, lenS, temp); //need to check all options by removing chars.
            if (substring(t, temp))
                return 1;
            j++;
        }
    }
    return 0;
}

void print_similar_words(char *str) {
    int linesIndex = 0;
    char word[WORD] = "";
    while (linesIndex < LINES) {
        while (getWord(word)) {
            if (similar(word, str))
                puts(word);
        }
        linesIndex++;
    }
}
