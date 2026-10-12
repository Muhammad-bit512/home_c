#include <stdio.h>

void f(int n)
{
    if(n > 1)
        f(n - 1);
    printf("%d ", n);
}

int main(void)
{
    int x;
    scanf("%d", &x);
    f(x);
    return 0;
}