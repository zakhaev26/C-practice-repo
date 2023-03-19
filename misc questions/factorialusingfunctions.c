//Program to print factorial of any arbitrary number.

#include<stdio.h>
int factorial(int z);

int main(){
int num,fact;
printf("Enter a number:\n");
scanf("%d",&num);
fact = factorial(num);
printf("The factorial of %d is %d",num,fact);

return 0;
}

int factorial(int z){

    if (z==1 || z == 0){
        return 1;
    }
    int fact = z*factorial(z-1);
    return fact;
}
