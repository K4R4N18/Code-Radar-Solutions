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
        int is_first=1;
        for(int j = 0 ; j<N;j++)
        {
            if(arr[i]==arr[j])
                is_first=0;
                break;
        }

        if(is_first)
        {
            f=0;
        for(int j = 0; j<N;j++)
        {
            if(arr[j] == arr[i])
                f++;
        }
        
        printf("%d %d\n",arr[i],f);
        }
        
    }
    
    return 0;
}