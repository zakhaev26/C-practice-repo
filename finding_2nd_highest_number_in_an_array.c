#include <stdio.h>
int main()
{

    int count = -1;
    int n;
    printf("Enter n:\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
        count++;
    }
    int max = arr[0];
    int a = 0;
    for (int i = 0; i <= count; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    int max2;

    for (int j = 1; j <= max + 2; j++)
    {
        for (int k = 0; k <= count; k++)
        {
            if (max - j == arr[k])
            {
                max2 = arr[k];
                printf("%d\t", max2);
                a += 1;
            }
        }
        if (a == 1)
        {
            break;
        }
    }
    return 0;
}
