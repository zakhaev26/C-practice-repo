#include<stdio.h>
#include<ctype.h>



int main(){
printf("%d",isdigit('9'));
for(int i=1;i<=5;i++){
    for(int j =5;j>=i;j--){
        printf(" # ");
    }
    
    for(int j =1;j<=i;j++){
        printf(" %d ",j);
    }
    
    for(int k =1 ;k<=i-1;k++){
        printf(" %d ",k);
    }//very important...
    printf("\n");
}


return 0;
}