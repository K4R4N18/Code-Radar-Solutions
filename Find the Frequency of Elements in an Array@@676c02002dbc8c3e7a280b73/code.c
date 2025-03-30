#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    
    for (int i = 0; i < N; i++)
    {
        // Simple duplicate check
        int duplicate = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                duplicate = 1;
                break;
            }
        }
        
        if (!duplicate)
        {
            int count = 1;
            for (int j = i + 1; j < N; j++)
            {
                if (arr[j] == arr[i])
                    count++;
            }
            printf("%d %d\n", arr[i], count);
        }
    }
    
    return 0;
}
