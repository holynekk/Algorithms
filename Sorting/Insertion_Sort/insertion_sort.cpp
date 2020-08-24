#include <iostream>

void insertion_sort(int * arr, int n){
    for (int i = 1; i < n; i++){
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > arr[i] && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}