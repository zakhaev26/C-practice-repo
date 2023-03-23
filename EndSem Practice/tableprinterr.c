#include<stdio.h>
int main(){

int root[]={1,2,3,4,5,6,7,8,9,10};

for(int i=0;i<=9;i++){
    printf("Table of %d:\n",root[i]);
    for(int j=0;j<=9;j++){
        printf("%d X %d = %d\n",root[i],root[j],root[i]*root[j]);
    }
    printf("\n");
}

return 0;
}