def merge_sort(arr):
	ln = len(arr)
	if ln > 1:
		mid = ln / 2
		left = arr[:mid]
		right = arr[mid:]
		
		merge_sort(left)
		merge_sort(right)
		
		lenR = len(right)
		lenL = len(left)
		
		i = j = k = 0
		while i < lenL and j < lenR:
			if left[i] <= right[j]:
				arr[k] = left[i]
				i += 1
			else:
				arr[k] = right[j]
				j += 1
			k += 1
		while i < lenL:
			arr[k] = left[i]
			i += 1
			k += 1
		while j < lenR:
			arr[k] = right[j]
			j += 1
			k += 1
		
		
