#include<stdio.h>
int main(){

    for(int i=1;i<=6;i++){
        for(int k=5;k>=i;k--){
            printf("   ");
        }
       
      
        for(int k=1;k<=2*i-1;k++){
            printf(" * ");
        }
        printf("\n");

    }



return 0;
}
