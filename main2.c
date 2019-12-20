#include <stdio.h>
#include "textSearch.h"

int main() {
    /*
     * Main for the second Exercise
     */
    char word[WORD] = {};
    int option = 'a';
    getWord(word);
    option = getchar();
    switch(option){
        case 'a':
            print_lines(word);
            break;
        case 'b':
            print_similar_words(word);
            break;
        default:
            break;
    }
    /*
     * Main for the first Exercise
     */
    /*
    int n = -1;
    int arr[SIZE] = {};
    int i = 0;
    while((scanf(" %d", &n)) != EOF && i < SIZE){
        *(arr+i) = n;
        i++;
    }
    insertion_sort(arr,SIZE);
    for(int j = 0; j < SIZE; j++){
        printf("%d, ",*(arr+j));
    }
     */
    return 0;
}
