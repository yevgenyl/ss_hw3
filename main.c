#include <stdio.h>
#include "insertionSort.h"
#define SIZE 50

int main() {
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
    return 0;
}
