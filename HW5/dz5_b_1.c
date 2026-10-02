#include <stdio.h>

int main(void)
{
    int x;
    if (scanf("%d", &x) != 1)
    {
        printf("Error input");
        return 1;
    }

    if (x >= 1 && x <= 100)
    {
        for (int i = 1; i <= x; ++i)
        {
            printf("%d %d %d\n", i, i * i, i * i * i);
        }
    }

    return 0;
}
