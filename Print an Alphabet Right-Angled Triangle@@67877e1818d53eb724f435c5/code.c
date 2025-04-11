// Your code here...
# include <stdio.h>

int main()
{
    int n,alphabet;
    scanf("%d",&n);

    for (int i = 1; i<=n; i++)
    {
        alphabet = 65;
       for (int j = 1; j<=i; j++)
       {
        printf("%c ",alphabet + j); 
       }
       printf("\n");
    }
    return 0;
}