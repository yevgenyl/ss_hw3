//
// Created by Yevgeny Lashtchionov on 18/12/2019.
//

#ifndef SS_HW3_TEXTSEARCH_H
#define SS_HW3_TEXTSEARCH_H
#define WORD 30

int getLine(char s[]);
int getWord(char w[]);
int substring(char *str1, char *str2);
void print_lines(char *str);
int similar(char *s, char *t);
void removeChars(char *s, int i, int len, char *newStr);
void print_similar_words(char * str);

#endif //SS_HW3_TEXTSEARCH_H
