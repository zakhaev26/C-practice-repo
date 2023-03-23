#include<stdio.h>
#include<stdlib.h>
int main(){

int *ptr;
ptr=(int *) malloc(5*sizeof(int));
ptr[0]=41;
ptr[1]=2;
ptr[2]=8;
ptr[3]=9;
ptr[4]=33;

for(int i=0;i<=4;i++){
    printf("%d\n",*(ptr+i));
}
return 0;
}