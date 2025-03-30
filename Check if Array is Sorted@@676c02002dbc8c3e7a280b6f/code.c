#include <stdio.h>
#include <stdbool.h>

bool sorted(int arr[],int length);
int main()
{
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for(int i = 0; i<N; i++)
        scanf("%d", &arr[i]);
        
    if (sorted(arr,N))
        printf("Sorted");
    else
        printf("Not Sorted");
        
    return 0;
}

bool sorted(int arr[],int length)
{

    for(int i = 1; i<length; i++)
    {
        if (arr[i-1] > arr[i])
        {
            return false;
        }
        
    }
    return true;
}