
/* Ввести два целых числа a и b (a ≤ b) и вывести сумму
квадратов всех чисел от a до b. */

#include <stdio.h>

int main(void)
{   int a, b;
    if(scanf("%d%d", &a, &b) != 2) {
        printf("Error input");
        return 1;
    }
    
    if(a <= b && a <= 100 && b <= 100) {
        int res = 0;
        for(int i = a; i <= b; ++i) {
            res += i * i;
        }
        printf("%d", res);
    }
    return 0;
}