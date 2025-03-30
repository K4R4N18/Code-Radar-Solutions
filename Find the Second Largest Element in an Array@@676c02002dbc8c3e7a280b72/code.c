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
    
   int first = -500;
   int second = -500;
   
   for(int i = 0; i<n; i++)
   {
       if(arr[i]>first)
       {
           second=first;
           first=arr[i];
       }
       else if (arr[i]>second && arr[i]!=first)
       {
           second = arr[i];
       }
   }
   if(second == -500)
   {
       printf("-1");
   }
   else
   {
       printf("%d",second);
   }
    
    return 0;
}