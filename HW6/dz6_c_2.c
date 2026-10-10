
/* Составить функцию, возведение числа N в степень P. int power(n, p) и привести
пример ее использования.
Input format
Два целых числа: N по модулю не превосходящих 1000 и P ≥ 0 */

int power(int n, int p)
{
    int res = 1;
    if(n <= 1000 && p >= 0) {
        for(int i = 1; i <= p; ++i) {
            res *= n;
        }
            return res;

    }
    return 1;
}

#include <stdio.h>

int main(void)
{
    int N, P;
    scanf("%d%d", &N, &P);
    printf("%d", power(N, P));

    return 0;
}