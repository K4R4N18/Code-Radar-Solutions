// Your code here...
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for(int i = 0; i<N; i++)
        scanf("%d", &arr[i]);

    if (arr[0]>=arr[i])
        printf("%d",arr[0]);
    else if
    {
        
        for (int i = 1; i<N-1; i++)
        {
            if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
            {
                printf("%d",arr[i]);
                break;
            }
        }
    }
    else if (arr[N-1]>=arr[N-2])
    {
        printf("%d",arr[N-1]);
    }
    else
    {
        printf("-1");
    }   
    return 0;
}