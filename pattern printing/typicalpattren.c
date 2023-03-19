#include <stdio.h>
int main()
{
    int a;
    printf("Enter Number:");
    scanf("%d",&a);

    for (int i = 0; i <= a; i++)
    {
        for (int z = a; z >= i; z--)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int k = 2; k <= i; k++)
        {
            printf("%d ", k - 1);
        }

        printf("\n");
    }

    return 0;
}