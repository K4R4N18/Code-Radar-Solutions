
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    
   int t;
   scanf("%d",&t);
   
   for(int i = 0; i<N;i++)
   {
       if(t == arr[i])
       {
        printf("%d",i);
        return 0;
       }
   }
    
    printf("-1");
    return 0;
}