

def bubble_sort(arr):
    n = len(arr)
    for i in range(0, n - 1):
        for k in range(0, n - i - 1):
            if arr[k] > arr[k+1]:
                tmp = arr[k]
                arr[k] = arr[k-1]
                arr[k-1] = tmp