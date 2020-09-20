#include <stdio.h>

void swap(int *m, int *n){
    int temp = *m;
    *m = *n;
    *n = temp;
}

void bubble_sort(int * arr, int n){   // n is the size of the
    int i, j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                swap((arr+j), (arr+j+1));
            }else;
        }
    }
}