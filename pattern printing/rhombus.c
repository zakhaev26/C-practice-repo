#include<stdio.h>
int main(){

for(int i=1;i<=4;i++){
    for(int k=3;k>=i;k--){
        printf(" # ");
    }
    for(int k=1;k<=4;k++){
        printf(" * ");
    }
    printf("\n");
}


return 0;
}