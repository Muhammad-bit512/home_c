#include <stdio.h>
#define N 10
int min(int arr[], int n);
int max(int arr[], int n);
int pos_min(int arr[], int n);
int pos_max(int arr[], int n);

int main(void)
{
    int arr[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d %d %d %d", pos_max(arr, N) + 1, max(arr, N), pos_min(arr, N) + 1, min(arr, N));
    return 0;
}




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

int max(int arr[], int n)
{
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int pos_min(int arr[], int n)
{ 
    int min = arr[0];
    int i;
    int pos = 0; 
    for (i = 1; i < n; i++) {
        if (min > arr[i])
        { 
            min = arr[i]; 
            pos = i;
        } 
    }
    return pos; 
}

int pos_max(int arr[], int n)
{ 
    int max = arr[0];
    int i;
    int pos = 0; 
    for (i = 1; i < n; i++) {
        if (max < arr[i]) { 
            max = arr[i]; 
            pos = i;
        } 
    }
    return pos; 
}
