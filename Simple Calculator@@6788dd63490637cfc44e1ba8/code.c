// Your code here...
#include <stdio.h>
int main()
{
    int a,b;
    char ch;
    scanf("%d %d %c", &a, &b, &ch);

    if (ch == '+')
    {
        printf("%d", a + b);
    }
    else if (ch == '-')
    {
        printf("%d", a - b);
    }
    else if (ch == '*')
    {
        printf("%d", a * b);
    }
    else if (ch == '/')
    {
        printf("%f", (float) a / b);
    }
    return 0;
}