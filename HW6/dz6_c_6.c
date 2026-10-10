#include <stdio.h>

unsigned long long get_grains(int n)
{
    unsigned long long sum = 1;
    for(int i = 1; i < n; ++i) {
        sum *= 2;
    }
    return sum;
}

int main(void)
{
    int N;
    scanf("%d", &N);
    printf("%llu", get_grains(N));
    return 0;
}