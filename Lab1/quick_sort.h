void quick_sort(int arr_size, vector <l>  &arr) {
	l pivot = arr[arr_size-1];
	l temp, prev_max;
	int pivot_idx = 0, prev_idx = -1;

	for (int i = 0; i < arr_size - 1; ++i) {
		if (arr[i] < pivot) {
			if ((prev_idx > -1) and (arr[i] < prev_max)) {
				temp = arr[i];
				arr[i] = prev_max;
				arr[prev_idx] = temp;
				prev_idx = prev_idx + 1;
				prev_max = arr[prev_idx];
			}
			pivot_idx++;
		}
		else if (prev_idx < 0) {
			prev_max = arr[i];
			prev_idx = i;
		}
	}
	if (prev_idx > -1) {
			arr[arr_size-1] = arr[pivot_idx];
			arr[pivot_idx] = pivot;
		}

		if (arr_size > 2) {
			if (pivot_idx != 0)
				quick_sort(pivot_idx, arr);
			if (arr_size - pivot_idx - 1 != 0)
				quick_sort(arr_size - pivot_idx - 1, arr);
	}
}
