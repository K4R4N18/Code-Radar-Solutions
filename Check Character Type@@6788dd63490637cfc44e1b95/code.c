// Your code here...
#include <stdio.h>
int main()
{
    int a;
    char b;
    scanf("%c%d",&a,&b);

    if (a>='a' && a<='z' || a>='A' && a<='Z')
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
    return 0;
}