#include <stdio.h>
#include<string.h>
int main()
{

    char sr[30] = "spring";
    char re[30];

    int n = 5;
//-4 ke lie kaam nahi kar raha
    for (int i = 0; i<= n-4; i++)
    {
        re[i] = sr[i];

    }
    char *ptr;
    ptr = &re[6];
    ptr = "\0";


    printf("%s \n", re[n-4]);

    return 0;
}
