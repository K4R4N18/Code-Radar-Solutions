// Your code here...
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j =0; j < n - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2*i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int a = n-1; a > 0; a--)
    {
        for (int b = 1; b <= n - a; b++)
        {
            printf(" ");
        }

        for (int c = 0; c < 2*a-1; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}