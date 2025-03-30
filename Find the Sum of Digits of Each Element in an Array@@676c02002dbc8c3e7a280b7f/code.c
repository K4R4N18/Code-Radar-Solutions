// Your code here...
// Online C compiler to run C program online
#include <stdio.h>

int sumOfDigits(int n)
{
    return (n==0) ? 0 : n%10 + sumOfDigits(n/10);
}

int main()
{
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
        
    for (int i = 0; i < N; i++)
    {
        arr[i] = sumOfDigits(arr[i]);
    }
    
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
   
    
    return 0;
}