#include <stdio.h>
int main()
{

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {

            printf(" %d ", 2 * j + 1);
        }
        printf("\n");
    }

    return 0;
}