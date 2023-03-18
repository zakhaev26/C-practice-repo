#include<stdio.h>

void main(){


int arr[]={1,2,3,4,5,6,7,8,9};

//n=8;

for(int i=0;i<=8;i++){
    printf("%d\t",arr[i]);
}
int pos;
scanf("%d",&pos);
pos=pos-1;

for(int i=pos;i<=8;i++){

    arr[i]=arr[i+1];
}

for(int i=0;i<=7;i++){
    printf("%d\t",arr[i]);
}










}