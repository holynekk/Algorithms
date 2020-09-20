#include <stdio.h>


void counting_sort(int *arr, int n){
    int i, k, largest = arr[0];
    int *count;
    for (i = 1; i < n; i++){
        if (largest < arr[i]) largest = arr[i];
    }
    count = (int*)malloc(sizeof(int)*largest);
    for (i = 0; i < largest+1 ; i++){
        count[i] = 0;
    }

    for (i = 0; i < n; i++){
        count[arr[i]]++;
    }

    for (i = 0, k = 0; i <= largest; i++){
        while (count[i]){
            arr[k++] = i;
            count[i]--;
        }
    }
    free(count);
}