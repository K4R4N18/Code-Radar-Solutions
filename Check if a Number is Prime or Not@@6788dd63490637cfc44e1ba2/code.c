// Your code here...
#include <stdio.h>
#include <stdbool.h>

bool isprime(int a)
{
    if (a<1)
        return false;

    if (a == 1)
        return false;

    for (int i = 2; i<a; i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
    
}

int main()
{
    int a;
    scanf("%d",&a);

    if(isprime(a))
        printf("Prime");
    else
        printf("Not Prime");
    
    return 0;
}