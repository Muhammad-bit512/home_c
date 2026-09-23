#include <stdio.h>

int main(void) 
{
    int num;

    if (scanf("%d", &num) != 1) {
        return 1;
    }

    if (num < 0) {
        num = -num;
    }

    int digit1 = num / 100;
    int digit2 = (num / 10) % 10;
    int digit3 = num % 10;

    int sum = digit1 + digit2 + digit3;

    printf("%d\n", sum);

    return 0;
}
