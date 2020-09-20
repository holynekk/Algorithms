
def binary_search(arr, num):
    start = 0, end = len(arr) - 1
    while start <= end:
        mid = (star + end)/2
        if arr[mid] == num:
            return mid
        elif arr[mid] > num:
            end = mid - 1
        else:
            start = mid + 1