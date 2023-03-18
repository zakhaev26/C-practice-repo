#include <stdio.h>
#include<string.h>
int main()
{

    char arr[] = "Soubhik";

    char *ptr = &arr[0];

    for (int i = 0; *(ptr + i) != '\0'; i++)
    {
        char temp;
        temp=*(ptr + i);
        *(ptr+i)= *(ptr+6-i); 
    }

    printf("%s",arr);
    return 0;
}