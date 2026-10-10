
// Составить функцию, модуль числа и привести пример ее использования.

int abs(int a)
{
    if(a < 0)
    return -a;
    return a;
}

#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d", abs(x));


    return 0;
}
