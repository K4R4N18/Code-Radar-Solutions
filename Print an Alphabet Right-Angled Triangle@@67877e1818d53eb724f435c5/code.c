// Your code here...
# include <stdio.h>

int main()
{
    int n,alphabet;
    scanf("%d",&n);

    for (int i = 0; i<n; i++)
    {
        alphabet = 65;
       for (int j = 0; j<i; j++)
        printf("%c",alphabet + j+1); 
    }
    return 0;
}