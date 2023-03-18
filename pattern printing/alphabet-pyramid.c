#include<stdio.h>
int main(){

for(int i=1;i<=5;i++){
    if(i == 1){
    printf(" #  #  #  #  #  #A");
}
printf("\n");    for(int j = 5;j>=i;j--){
       printf(" # ");
    }
    for(int j=1;j<=i;j++){
        printf(" %c ",j+64);
    }
    for(int j=1;j<=i;j++){
        printf(" %c ",j+64);
    }
    printf("\n");

}


return 0;
}