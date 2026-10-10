
/* Составить функцию, которая определяет сумму всех чисел от 1 до N
и привести пример ее использования. */

#include <stdio.h>

int get_sum(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d", get_sum(x));
    return 0;
}