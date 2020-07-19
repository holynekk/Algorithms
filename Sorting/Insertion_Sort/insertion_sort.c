#include <stdio.h>

void insertion sort(int *arr, int n){
	int i, j, main;
	for (i = 1; i < n; i++){
		main = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > main){
			arr[j+1] = arr[j];
			j -= 1;
		}arr[j+1] = main;
	}
}
