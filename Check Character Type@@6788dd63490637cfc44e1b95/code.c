// Your code here...
#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    int b;
    scanf("%c",&a);
    scanf("%d",&b);
    if (isalpha(a))
    {
        if (a=='a' || a=='i' || a=='e' || a=='o' || a=='u' || a=='A' || a=='I' || a=='E' || a=='O' || a=='U')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else if (isdigit(a))
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}