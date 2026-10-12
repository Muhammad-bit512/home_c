#include <stdio.h>

void d(int n) {
    if (n > 1) {
        d(n / 2);
    }
    printf("%d", n % 2);
}

int main(void) {
    int N;
    if (scanf("%d", &N) == 1) {
        d(N);
        printf("\n");
    }
    return 0;
}
