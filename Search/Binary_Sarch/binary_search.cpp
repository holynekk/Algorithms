#include <iostream>

using namespace std;

// Funtion returns the index of the number
// that we search for
int binary_search(int arr[], int number){
    int start = 0, end = number - 1;
    while (start <= end){
        int mid = (start + end)/2;
        if (arr[mid] == number){
            return mid;
        }if (arr[mid] > number){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    
}
