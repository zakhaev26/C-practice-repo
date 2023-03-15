#include <stdio.h>
int main()
{
    int a = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ",2*a+1);
            a++;
        }
        printf("\n");
    }

    return 0;
}