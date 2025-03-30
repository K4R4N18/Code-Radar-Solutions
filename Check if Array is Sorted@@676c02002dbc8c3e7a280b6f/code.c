#include <stdio.h>
#include <stdbool.h>

void sorted(int arr[],int length);
int main()
{
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for(int i = 1; i<N; i++)
        scanf("%d", &arr[i]);
        
    if (sorted(arr,N))
        printf("Sorted");
    else
        printf("Not Sorted");
        
    return 0;
}

void sorted(int arr[],int length)
{
    for(int i = 0; i<N; i++)
    {
        if (arr[i] > arr[i+1])
        {
            return false;
        }
        
    }
    return true;
}