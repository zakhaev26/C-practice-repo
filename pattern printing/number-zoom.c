// #include<stdio.h>
// int main(){

// for(int i =1;i<=7;i++){
//     for(int j=1;j<=7;j++){
//         if(i==1 || i==7){
//             printf(" * ");
//         }
//         if(j==1){
//             printf("*");
//         }
//         if(j==7){
//             printf("                   *");
//         }
//         else{
//             printf(" ");
//         }
//     }
//     printf("\n");
// }

// return 0;
// }

#include <stdio.h>

void main()
{

    // if num==n;
    //  iterations=2n-1

    int num = 4;
    for (int i = 0; i <= 2 * num - 2; i++)
    {
        for (int j = 0; j <= 2 * num - 2; j++)
        {

            if (i == 0 || i == 2 * num - 2 || j == 0 || j == 2 * num - 2)
            {
                printf("%d   ", num);
            }
            else if (((i + j >= 2) && (j == 1)) || (i == 1) && (i + j >= 3) || ((i + j) >= 7) && (j == 5) || ((i + j) >= 6) && (i == 5))
            {
                printf("%d   ", num - 1);
            }
            else if (i == 3 && j == 3)
            {
                printf("%d   ", num - 3);
            }
            else if (((i + j >= 4) && (i == 2)) || (j == 4) && (i + j >= 6) || ((i + j) >= 6) && (i == 4) || ((i + j) >= 4) && (j == 2))
            {
                printf("%d   ", num - 2);
            }

            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
