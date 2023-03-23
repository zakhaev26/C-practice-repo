#include <stdio.h>
int main()
{

    FILE *fp;

    fp = fopen("string", "r");
    char arr[200];

    for (int i = 0; i <= 1; i++)
    {
        fgets(arr, 200, fp);
        printf("%s", arr);
    }

    return 0;
}