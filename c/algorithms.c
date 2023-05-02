void insertion_sort(int arr[], int length) {
    int i, j, key;
    for (i = 1; i < length; i++) {
        key = arr[i];        
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
