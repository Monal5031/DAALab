void insertion_sort(vector <l> &arr) {
	for (int i = 1; i < arr.size(); ++i) {
		l key = arr[i];
		int j = i - 1;
		while (j >= 0 and arr[j] > key) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
