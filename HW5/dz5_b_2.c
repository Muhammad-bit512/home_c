
/* Ввести два целых числа a и b (a ≤ b) и вывести
квадраты всех чисел от a до b. */

#include <stdio.h>

int main(void)
{   int a, b;
    if(scanf("%d%d", &a, &b) != 2) {
        printf("Error input");
        return 1;
    }
    
    if(a <= b && a <= 100 && b <= 100) {
        for(int i = a; i <= b; ++i) {
            printf("%d ", i * i);
        }
    }
    return 0;
}