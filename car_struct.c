#include <stdio.h>

typedef struct car
{

    int wheels;
    char name[20];
    int price;
} car;

int main()
{

    car arr[5];

    for (int i = 0; i < 5; i++)
    {

        char carname[20];
        scanf("%d", &arr[i].wheels);
        scanf("%s", &carname);
        strcpy(arr[i].name, carname);
        scanf("%d", &arr[i].price);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i].wheels);
    }

    return 0;
}
