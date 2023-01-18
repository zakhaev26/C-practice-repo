#include<stdio.h>
int main(){

for(int i =1;i<=7;i++){
    for(int j=1;j<=7;j++){
        if(i==1 || i==7){
            printf(" * ");
        }
        if(j==1){
            printf("*");
        }
        if(j==7){
            printf("                   *");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}

return 0;
}