#include <bits/stdc++.h> 
#define MAX 10000

using namespace std;

void merge(int arr[], int m, int mid, int n){
    int i, k, j;
    int n1 = mid - m + 1, n2 = n - mid;
    int *left = new int[n1+1];
    int *right = new int[n2+1];
    for (i = 0; i < n1; i++){
        left[i] = arr[m+i];
    }for (k = 0; k < n2; k++){
        right[k] = arr[mid+k+1];
    }
    left[n1] = MAX;
    right[n2] = MAX;
    i = 0, j = 0;
    for (k = m; k < n+1; k++){
        if (left[i] <= right[j]){
            arr[k] = left[i++];
        }else{
            arr[k] = right[j++];
        }
    }
    delete left;
    delete right;
    
}

void merge_sort(int arr[], int m, int n){
    if (m < n){
        int mid = (m+n)/2;
        merge_sort(arr, m, mid);
        merge_sort(arr, mid+1, n);
        merge(arr, m, mid, n);
    }

}