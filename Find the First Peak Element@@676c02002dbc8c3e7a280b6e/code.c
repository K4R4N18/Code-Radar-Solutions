// Your code here...
#include <stdio.h>
int findFirstPeak(int arr[], int length);
int main()
{
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for(int i = 0; i<N; i++)
        scanf("%d", &arr[i]);

    
    return 0;
}

int findFirstPeak(int arr[], int length)
{
    if (length == 1)
        return 0; 
    
    t
    if (arr[0] >= arr[1])
        return 0;
    
    
    for (int i = 1; i < length - 1; i++)
    {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            return i;
    }
    
    // Check last element
    if (arr[length - 1] >= arr[length - 2])
        return length - 1;
    
    return -1; // No peak found (shouldn't happen for valid inputs)
}