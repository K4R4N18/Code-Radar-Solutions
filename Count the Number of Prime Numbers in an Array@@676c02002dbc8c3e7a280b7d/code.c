// Your code here...
// Online C compiler to run C program online
#include <stdio.h>

int is_prime(int num)
{
    if(num<=1)
        return 0;
    for(int i = 2; i<num; i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}


int main()
{
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
        
    int count = 0;
    
    for(int i = 0; i<N; i++)
    {
        if(is_prime(arr[i]))
            count++;
    }
    printf("%d",count);
    
   
    
    return 0;
}