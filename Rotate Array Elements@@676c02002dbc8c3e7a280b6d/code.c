// Your code here...
#include <stdio.h>

void rotate_right_once(arr[], int length)
{
    int temp = arr[length - 1];

    for (int i = (length - 1); i>=0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0]=temp;
}

int main()
{
    int N,k;
    scanf("%d",&N);

    int arr[];
    for(int i = 0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",k);

    rotate_right_once(arr,N);

    for (int i = 0; i<N ; i++)
        printf("%d",arr[i]);
    

    return 0;
}