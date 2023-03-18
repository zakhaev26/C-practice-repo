#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}

int main(){

printf("%d",sum(100000000000));

return 0;
}