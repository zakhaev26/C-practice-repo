#include <stdio.h>
int main()
{

    int matrix1[2][2];
    int matrix2[2][2];
    int matrix3[2][2];

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("(%d,%d)th Element of Matrix 1:",i + 1, j + 1);
            scanf("%d",& matrix1[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("(%d,%d)th Element of Matrix 2:", i + 1, j + 1);
            scanf("%d",& matrix1[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        
        {
            for (int z = 0; z <= 2; z++)
            {
                matrix3[i][j]=matrix1[i][z]*matrix2[z][j];
            }
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
           printf("%d", matrix3[i][j]);
            
        }
    printf("\n");
    }

    return 0;
}
