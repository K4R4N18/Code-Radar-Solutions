// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for (int i ; i = 0; i<n; i++)
    {
        for (int j; j<n-i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}