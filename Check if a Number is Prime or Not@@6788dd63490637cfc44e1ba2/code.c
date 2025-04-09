// Your code here...
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    if (a<1)
        printf("Invalid Input");

    for (int i = 2; i<a; i++)
    {
        if (a%i==0)
        {
            printf("Not Prime");
            break;
            
        }
        else
        {
            printf("Prime");
            break;
        }
    }
    return 0;
}