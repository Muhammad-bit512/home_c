void sort_even_odd(int n, int a[]) {
    for (int i = 1; i < n; i++) {
        if (a[i] % 2 == 0) {
            int key = a[i];
            int j = i - 1;
            
            while (j >= 0 && a[j] % 2 != 0) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = key;
        }
    }
}