// Your code here...
// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int N,f=0;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    
    for (int i = 0; i<N;i++)
    {
        for(int j = 0; j<N;j++)
        {
            if(a[j] == a[i])
                f++;
        }
        
        printf("%d %d\n",i,f);
    }
    
    return 0;
}