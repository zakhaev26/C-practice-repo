#include <stdio.h>
int main()
{

    FILE *fp1;

    char filename[10];
    int qty;
    char itemname[10];
    int price;
    scanf("%s", filename);

    fp1 = fopen(filename, "w");

    printf("Enter Data:\n\n");
    printf("itemname   qty  price \n ");

    for (int i = 0; i <= 2; i++)
    {
        fscanf(stdin, "%s %d %d", itemname, &qty, &price);
        fprintf(fp1, "%s %d %d", itemname, qty, price);
    }

    fclose(fp1);
    fprintf(stdout, "\n\n");
    fp1 = fopen(filename, "r");
    printf("item name   qty  price \n ");
    for (int i = 0; i <= 2; i++)
    {
        fscanf(fp1, "%s %d %d", itemname, &qty, &price);

        fprintf(stdout, "%s %d %d", itemname, qty, price);
    }

    fclose(fp1);

    return 0;
}

// #include <stdio.h>
// int main()
// {

//     FILE *fp;

//     char filename[10];
//     int price;
//     char itemname[20];
//     int qty;

//     scanf("%s", filename);

//     fp = fopen(filename, "w");

//     printf("Enter Data;\n");
//     printf("Item Name  QTY Price");

//     for (int i = 0; i <= 2; i++)
//     {
//         fscanf(stdin, "%s %d %d", itemname,&qty,&price);
//         fprintf(fp, "%s %d %d", itemname,qty,price);
//     }

//     fclose(fp);

//     fp = fopen(filename, "r");

//     printf("Item Name   Quantity  Price\n\n");

//     for (int i = 0; i <= 2; i++)
//     {

//         fscanf(fp, "%s %d %d", itemname,&qty,&price);
//         fprintf(stdout,"%s %d %d", itemname, qty, price);

//         printf("\n");
//     }
//     fclose(fp);

//     return 0;
// }
