#include<stdio.h>
int main(){

int a[5]={5,1,15,20,25};

int i,j,m;;

i=++a[1];
j=a[1]++;
m=a[i++];
printf("%d\n%d\n%d\n",i,j,m);
//2,1,15

return 0;
}