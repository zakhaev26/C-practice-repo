#include<stdio.h>
int calc(int a){
    if(a==0){
        return 0;
    }
   return (a-1)*a+calc(a-1);
   //4x5+3x4+2x3+1x2
}
int main(){
int num;
printf("Enter Number:");
scanf("%d",&num);
printf("%d",calc(num));


return 0;
}