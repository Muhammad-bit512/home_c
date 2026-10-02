
// Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.


#include <stdio.h>

int main(void)
{
    int x;
    if(scanf("%d", &x) != 1) {
        printf("Error input");
        return 1;
    }

    if(x >= 100 && x <= 999 || x >= -999 && x <= -100)
        printf("YES"); 
    else
        printf("NO");
    return 0;
}