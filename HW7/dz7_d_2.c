#include <stdio.h>

int sum_recursive(int n) {
    if (n == 1) return 1;
    return n + sum_recursive(n - 1);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%d\n", sum_recursive(n));
    }
    return 0;
}
