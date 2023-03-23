#include<stdio.h>
#include<stdlib.h>

int main(){


int *ptr=(int *) calloc(7,4);

for(int i=0;i<=6;i++)
{
    scanf("%d",&(ptr[i]));
}

for(int i=0;i<=6;i++)
{
    printf("%d",ptr[i]);
}

return 0;
}