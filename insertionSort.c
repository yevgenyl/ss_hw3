//
// Created by user on 20/12/2019.
//

#include <stdio.h>

void shift_element(int *arr, int i){
    for(int j = i; j >= 0; j--){
        *(arr+j) = *(arr+(j-1));
    }
}

void insertion_sort(int *arr, int len){
    for(int i = 1; i < len; i++){
        int j = (i-1);
        int key = *(arr+i);
        int *p = (arr+i);
        int needToShift = 0;
        while(*(arr+j) > key && j >= 0) {
            needToShift = 1;
            p--;
            j--;
        }
        int diff = (arr+i) - p;
        if(needToShift){
            shift_element(p,diff);
            *p = key;
        }
    }
}
