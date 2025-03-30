// Your code here...
#include <stdio.h>
#include <stdbool.h>

bool sorted(arr[],int length);
int main()
{
    int N;
    scanf("%d", &N);
    
    int arr[N];
    
    if (sorted(arr[N],N))
        printf("Sorted");
    else
        printf("Not Sorted");
        
    return 0;
}

bool sorted(arr[],int length)
{
    for(int i = 1; i<N; i++)
        scanf("%d", &arr[i]);
        
    for(int i = 0; i<N; i++)
    {
        if (arr[i] > arr[i+1])
        {
            return false;
        }
        
    }
    return true;
}