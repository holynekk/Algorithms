#include <stdio.h>


void max_heapify(int *arr, int n, int i){
	int largest = i;
	int left = 2*i + 1;
	int right = 2*i + 2;
	int tmp;
	if (left < n && arr[left] > arr[largest]){
		largest = left;
	}if (right < n && arr[right] > arr[largest]){
		largest = right;
	}if (largest != i){
		tmp = arr[i];
		arr[i] = arr[largest];
		arr[largest] = tmp;
		max_heapify(arr, n, largest);
	}
}


void build_heap(int *arr, int n ){
	int i, tmp;
	for (i = n/2-1; i >= 0; i--){
		max_heapify(arr, n ,i)
	}for (i = n-1; i >= 0; i--){
		tmp = arr[i];
		arr[i] = arr[0];
		arr[0] = tmp;
		max_heapify(arr, i, 0);
	}
	
}

