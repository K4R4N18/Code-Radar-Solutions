// Your code here...
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    if (ch == A)
    {
        printf("Excellent");
    }
    else if (ch == 'B')
    {
        printf("Good");
    }
    else if (ch == 'C')
    {
        printf("Average");
    }
    else if (ch == 'D')
    {
        printf("Average");
    }
    else if (ch == 'F')
    {
        printf("Below Average");
    }
    else
    {
        printf("Invalid grade");
    }
    
    return 0;
}