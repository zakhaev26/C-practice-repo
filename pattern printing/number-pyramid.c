#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int z = 5; z >= i; z--)
        {
            printf(" * ");
        }
        for (int z = 2; z <= 2 * i - 1; z++)
        {
            printf("   ");
        }
        for (int z = 5; z >= i; z--)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}