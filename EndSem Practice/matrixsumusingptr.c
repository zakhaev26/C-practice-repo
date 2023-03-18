#include <stdio.h>
int main()
{

    int matrix1[3][3];
    int matrix2[3][3];
    int matrix3[3][3];
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Enter (%d ,%d) th element M1:", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Enter (%d ,%d) th element of M2:", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            int *ptr1 = &matrix1[i][j];
            int *ptr2 = &matrix2[i][j];
            matrix3[i][j] = *ptr1 + *ptr2;
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d\t",matrix3[i][j]);
        }
        printf("\n");
    }


    return 0;
}
