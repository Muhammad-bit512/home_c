
// Ввести целое число и найти сумму его цифр.

#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n == 0) {
        sum = 0;
    } else {
        while (n > 0) {
            sum += n % 10;
            n /= 10;       
        }
    }

    printf("%d\n", sum);

    return 0;
}
