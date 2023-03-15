#include <stdio.h>
int main()
{
    // FIRST APPROACH
    //  for (int i = 1; i <= 4; i++)
    //  {
    //      for (int j = 1; j <= 4; j++)
    //      {
    //          if(i+j==5){
    //              printf("*");
    //          }
    //          else if(i+j==6){
    //              printf("*");
    //          }
    //          else if(i+j==7){
    //              printf("*");
    //          }
    //          else if(i+j==8){
    //              printf("*");
    //          }
    //          else{
    //              printf(" ");
    //          }

    //     }

    //     printf("\n");
    // }

    // SECOND APPROACH{BEST}

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" # ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}