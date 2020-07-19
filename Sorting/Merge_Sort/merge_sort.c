#include <stdio.h>
#include <stdlib.h>

#define MAX 10000
void merge(int *arr, int m, int mid, int n){
    int i, j, k;
    int n1 = mid - m + 1, n2 = n-mid;
    int *Ltmp = (int*)malloc((n1+1)*sizeof(int));
    int *Rtmp = (int*)malloc((n2+1)*sizeof(int));
    for (i = 0; i < n1; i++){
        Ltmp[i] = arr[m+i];
    }for (j = 0; j < n2; j++){
        Rtmp[j] = arr[mid+j+1];
    }Ltmp[n1] = MAX;
    Rtmp[n2] = MAX;
    i = 0, j = 0;
    for (k = m; k < n+1; k++){
        if (Ltmp[i] <= Rtmp[j]){
            arr[k] = Ltmp[i++];
        }else{
            arr[k] = Rtmp[j++];
        }
    }free(Ltmp);
    free(Rtmp);
}

void merge_sort(int *arr, int m, int n){
    int mid;
    if (m < n){
        mid = (m+n)/2;
        merge_sort(arr, m, mid);
        merge_sort(arr, mid+1, n);
        merge(arr, m, mid, n);
    }else;
}
