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
   
   int missing = 1;
   for(int i = 0; i<N; i++)
   {
       if(arr[i]==missing)
       {
           missing++;
           i=-1;
       }
   }
   
   printf("%d",missing);
    
    
    return 0;
}