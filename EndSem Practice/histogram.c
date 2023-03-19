#include <stdio.h>
#include <string.h>

int main()
{
    char itemname[100];
    int amt, count = 0;
    for (int i = 1; ; i++)
    {
        printf("Enter Item name (Press 'q' to quit): ");
        fgets(itemname, 100, stdin);
        getchar();
        if (itemname[0] == 'q')
        {
            break;
        }
        else
        {
            count++;
            printf("Enter amount: ");
            scanf("%d", &amt);
            getchar();  // consume the newline character left in stdin
            for (int j = 1; j <= amt; j++)
            {
                printf("%s\t", itemname);
                for (int k = 1; k <= j; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
        itemname[0] = '\0'; // reset itemname to empty string
    }
    return 0;
}
