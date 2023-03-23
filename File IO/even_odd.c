// #include <stdio.h>
// int main()
// {

//     FILE *fp1, *fp2, *fp3;

//     fp1 = fopen("data", "w");
//     int number;
//     for (int i = 1; i <= 100; i++)
//     {

//         scanf("%d", &number);
//         if (number == -1)
//         {
//             break;
//         }
//         else
//         {
//             putw(number, fp1);
//         }
//     }

//     fclose(fp1);

// //1,998,66,90,57...



//     fp1 = fopen("data", "r");
//     fp2 = fopen("EVEN", "w");
//     fp3 = fopen("ODD", "w");

//     while ((number = getw(fp1)) != EOF)
//     {
//         if (number % 2 == 0)
//         {
//             putw(number, fp2);
//         }
//         else
//         {
//             putw(number, fp3);
//         }
//     }

//     fclose(fp1);
//     fclose(fp2);
//     fclose(fp3);

//     fp2 = fopen("EVEN", "r");
//     fp3 = fopen("ODD", "r");

//     while ((number = getw(fp2)) != EOF)
//     {
//         printf("%d", number);
//     }

//     printf("\n");

//     while ((number = getw(fp3)) != EOF)
//     {
//         printf("%d", number);
//     }
//     fclose(fp2);
//     fclose(fp3);

//     return 0;
// }

#include<stdio.h>

int main()
{
    int num,n;
    printf("enter number:");
    scanf("%d",&n);
    FILE *fptr,*feven,*fodd;
    fptr=fopen("abc.txt","w");

    for(int i=0;i<=n;i++)
    {
        scanf("%d",&num);
        if (num==-1){
            break;
        }
        else
        {
            putw(num,fptr);
        }
    }
    fclose(fptr);
    
    fptr=fopen("abc.txt","r");
    feven=fopen("e.txt","w");
    fodd=fopen("o.txt","w");

    while ((num=getw(fptr))!=EOF)
    {
        if (num%2==0){
            putw(num,feven);
        }
        else putw(num,fodd);
    }

    fclose(fptr);
    fclose(feven);
    fclose(fodd);

    feven=fopen("e.txt","r");
    fodd=fopen("o.txt","r");

    while ((num=getw(feven))!=EOF){
        printf("%d\t",num);
    }
    printf("\n");
    while ((num=getw(fodd))!=EOF){
    printf("%d\t",num);
    }
    fclose(feven);
    fclose(fodd);
return 0;
}
