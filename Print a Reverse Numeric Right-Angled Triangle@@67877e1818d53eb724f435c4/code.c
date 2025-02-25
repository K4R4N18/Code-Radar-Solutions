// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for (int i ; i = 0; i<n; i++;)
    {
        for (int j; j=n-i; j>0; j++;)
        {
            print("&d",j);
        }
        print("\n");
    }
    return 0;
}