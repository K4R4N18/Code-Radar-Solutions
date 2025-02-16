// Your code here...
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int bits = sizeof(int)*8;

    int msb = 1 << (bits - 1)

    if (n & msb)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    

    return 0;
}