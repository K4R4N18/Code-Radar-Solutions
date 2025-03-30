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
    
   int t;
   scanf("%d",&t);
   
   int found_index = -1;
   for(int i = 0; i<N;i++)
   {
       if(t == arr[i])
       {
        printf("%d",i);
        found_index = i;
        break;
       }
   }

   if (found_index!=-1)
        printf("%d",arr[found_index]);
    else
        printf("-1");
    
    
    return 0;
}