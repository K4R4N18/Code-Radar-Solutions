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
   
   int is_pallindrome = 1
   
   for(int i = 0;i<N;i++)
   {
       if(arr[i]!=arr[N-1-i])
        {
            is_pallindrome = 0;
            break;
        }
   }
    
    if(is_pallindrome)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}