#include <bits/stdc++.h> 

using namespace std;


void countSort(int arr[], int n){
    int k, largest = arr[0];
    //Finding largest element of the array
    for (k = 1; k < n; k++){
        if (arr[k] > largest) largest = arr[k];
    }
    //Initializing output and count arrays
    int *output = new int[n];

    int *count = new int[largest+1] ();
    
    //Storing the number of elements
    for (k = 0; k < n; k++){
        count[arr[k]]++;
    }
    //Storing cumulatively
    for (k = 1; k <= largest; k++){
        count[k] += count[k-1];
    }
    // Finding the index of each element of the original array in count array, and
    // place the elements in output array
    for (k = n - 1; k >= 0; k--){
        output[count[arr[k]] - 1] = arr[k];
        count[arr[k]]--;
    }
    //Copying output array into original array
    for (k = 0; k < n; k++){
        arr[k] = output[k];
    }
}