#include <stdio.h>
#define N 5

int min(int arr[], int n)
{
    int min = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main(void)
{
    int arr[N];
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", min(arr, N));
    return 0;
}