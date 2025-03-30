// Online C compiler to run C program online
// Your code here...
#include <stdio.h>
void rotate_right_once(int arr[], int length);
void rotate_right(int arr[], int length, int shift);
int main()
{
    int N,k;
    scanf("%d",&N);

    int arr[N];
    for(int i = 0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);

    rotate_right(arr,N,k);

    for (int i = 0; i<N ; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    

    return 0;
}



void rotate_right(int arr[], int length, int shift)
{
    for (int i = 0 ; i<shift;i++)
        rotate_right_once(arr, length);
}

void rotate_right_once(int arr[], int length)
{
    int temp = arr[length - 1];

    for (int i = (length - 2); i>=0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0]=temp;
}