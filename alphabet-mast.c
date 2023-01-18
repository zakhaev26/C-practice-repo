#include<stdio.h>
int main(){

for(int i=1;i<=4;i++){
    for(int k=3;k>=i;k--){
        printf(" # ");
    }
    for(int k =0;k<i;k++){
        printf(" %c ",k+65);
    }
    printf("\n");
}

return 0;
}