#include <stdio.h>
int main()
{

    int arr[8] = {1, 4, 3, 5, 78, 98, 32};
    for (int i = 0; i <= 6; i++)
    {
        printf("%d\t", arr[i]);
    }
    int num;
    printf("\n");
    printf("Enter the element you want to delete:\n");
    scanf("%d", &num);
    for (int i = 0; i <= 5; i++)
    {
        if (arr[i] == num)
        {
            arr[i] = arr[i + 1];
            arr[i + 1] = arr[i + 2];
            arr[i + 2] = arr[i + 3];
        }
        printf("%d\t", arr[i]);
    }

    return 0;
}
