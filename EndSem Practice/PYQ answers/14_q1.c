#include <stdio.h>
int main()
{

    while (1)
    {
        int n, count = 0;
        printf("Enter n:");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("Prime");
        }
        else
        {
            if (n == 1)
            {
                printf("prime");
            }
            else
            {
                printf("Not prime");
            }
        }
    }

    return 0;
}