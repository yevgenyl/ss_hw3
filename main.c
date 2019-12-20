#include <stdio.h>
#include "textSearch.h"

int main() {
    //Check getLine
    /*
    char s[250] = "";
    printf("%d", getLine(s));
    printf(" %s", s);
    */

    //Check getWord
    /*
    char s[250] = "";
    printf(" %d", getWord(s));
    printf(" %s", s);
    return 0;
     */

    //Check substring
    /*
    char s[] = "Hello Word From Mercaz Tseirim!";
    char s2[] = "Froms";
    printf("%d",substring(s,s2));
     */

    //Check print_lines
    /*
    char word[] = "cat";
    print_lines(word);
     */

    //Check similar
    /*
    char s1[] = "Hellof";
    char s2[] = "eo";
    char s3[] = "o";
    similar(s1,s2,1);
    printf("%d",substring(s1,s2));
    printf("%d",substring(s1,s3));
     */

    //Check removeChars
    /*
    char s1[30] = "Hello";
    char s2[30] = "";
    removeChars(s1,5,5,s2);
    printf("%s",s2);
    */

    //Check similar
    /*
    char s1[] = "Hello";
    char s2[] = "Hello";
    printf("%d",similar(s1,s2));
     */

    //Check print_similar_words
    char s1[] = "cat";
    print_similar_words(s1);
}
