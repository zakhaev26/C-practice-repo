// #include <stdio.h>
// int main()
// {

//     FILE *fp1;

//     fp1 = fopen("gay", "w");
//     int numbers;
//     while (1)
//     {
//         scanf("%d", &numbers);
//         if (numbers == -1)
//         {
//             break;
//         }
//         else
//         {
//             fprintf(fp1, "%d\n", numbers);
//         }
//     }
//     fp1 = fopen("gay", "r");
//     int sum = 0;
//     while ((fscanf(fp1, "%d", &numbers)) != EOF)
//     {
//         sum = sum + numbers;
//     }
//     fclose(fp1);

//     fp1 = fopen("gay", "a");
//     fprintf(fp1, "%d", sum);
//     fclose(fp1);

//     printf("%d", sum);
//     return 0;
// }

#include <stdio.h>
int main()
{
    FILE *fp1;

    fp1 = fopen("gay", "w");
    int numbers;
    while (1)
    {
        scanf("%d", &numbers);
        if (numbers == -1)
        {
            break;
        }
        else
        {
            fprintf(fp1,"%d\n",numbers);
        }
    }
    fclose(fp1);

    fp1=fopen("gay","r");
    int sum = 0;
    while ((fscanf(fp1,"%d",&numbers)) != EOF)
    {
        sum = sum + numbers;
    }
    fclose(fp1);

    fp1 = fopen("gay", "a");
    fprintf(fp1, "%d", sum);
    fclose(fp1);

    fp1 = fopen("gay", "r");
    printf("%d", sum);
    fclose(fp1);
    return 0;
}
