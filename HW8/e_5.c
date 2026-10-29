#include <stdio.h>
#define N 10

int main(void)
{
    int arr[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
     for(int i = 0; i < N; i++)
    {
        if(arr[i] >= 0)
        sum += arr[i];
    }
    printf("%d", sum);

    return 0;
}
