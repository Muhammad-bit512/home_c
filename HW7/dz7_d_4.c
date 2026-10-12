#include <stdio.h>

void f(int n)
{
    if(n >= 10) {
        f(n / 10);
    }
    printf("%d ", n % 10);

}
int main(void)
{
    int N;
    scanf("%d", &N);
    f(N);
    return 0;
}