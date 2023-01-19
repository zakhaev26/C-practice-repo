#include <stdio.h>
void main()
{
    // int z, y;
    // // insert "3" between 2 And 4...
    // int arr[6] = {1, 2, 4, 5, 6};
    // for (int i = 0; i <= 5; i++)
    // {
    //     if (arr[i] == 4 && i <= 2)
    //     {
    //         int z = arr[i];
    //         arr[i] = 3;
    //         y = arr[i + 1];
    //         arr[i + 1] = z;
    //         z = arr[i + 2];
    //         arr[i + 2] = y;
    //         arr[i + 3] = z;
    //     }
    //     printf("%d\t",arr[i]);
    // }

    int arr[9] = {1, 4, 5, 6, 8, 9, 2};
    int pos, num;
    
    for (int i = 0; i <= 6; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("Enter a position in which you want to insert:\n");
    scanf("%d", &pos);
    printf("Enter a number which you want to insert:\n");
    scanf("%d", &num);
    pos = pos - 1;

    arr[7] = num;
    for (int i = 7; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = arr[8];


    for (int i = 0; i <= 7; i++)
    {
        printf("%d\t", arr[i]);
    }
}
