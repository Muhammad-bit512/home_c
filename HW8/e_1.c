#include <stdio.h>

int main(void)
{
    int arr[5];
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    
    for(int i = 0; i < 5; i++) 
    {
        sum += arr[i];
    }
    
    double res = (double)sum / 5;
    printf("%.3f\n", res);

    return 0;
}
