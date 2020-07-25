
def max_heapify(arr, n, i):
	largest = i
	left = 2*i + 1
	right = 2*i + 2
	if left < n and arr[left] > arr[i]:
		largest = left
	if right < n and arr[right] > arr[i]:
		largest = right
	if largest != i:
		arr[i], arr[largest] = arr[largest], arr[i]
		max_heapify(arr, n, largest)

def build_heap(arr):
	n = len(arr)
	for i in range(n/2, -1, -1):
		max_heapify(arr, n, i)
	for i in range(n-1, 0, -1):
		arr[i], arr[0] = arr[0], arr[i]
		max_heapify(arr, i, 0)
	
