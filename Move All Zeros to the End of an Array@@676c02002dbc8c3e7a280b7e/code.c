// Your code here...
// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
        
    int pos = 0;
    for (int i = 0; i < N; i++)
    {
        if(arr[i]!=0)
            arr[pos++] = arr[i];
    }
    
    while(pos<N)
    {
        arr[pos++]=0;
    }
    
    for (int i = 0; i < N; i++)
    {
        printf("%d",arr[i]);
    }
   
    
    return 0;
}