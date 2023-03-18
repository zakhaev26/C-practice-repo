#include <stdio.h>

void main()
{

    int arr[] = {1, 2, 3, 44, 5, 6, 7};

    for (int i = 0; i <= 6; i++)
    {
        printf("%d\t", arr[i]);
    }
    int pos, num;
    scanf("%d", &pos); // 4
    scanf("%d", &num);
    pos = pos - 1;
    for (int i = 7; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;

    for (int i = 0; i <= 7; i++)
    {
        printf("%d\t", arr[i]);
    }
}