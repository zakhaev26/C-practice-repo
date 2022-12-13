#include<stdio.h>

int sqarea(int n);
int rectarea(int n,int d);
float cirarea(int n);

int main(){
    int ls,l,b,r;
    printf("Enter the length of side of the square whose area you want to find:\n");
    scanf("%d",&ls);
    int a = sqarea(ls);
    printf("Enter the length of rectangle  whose area you want to find:\n");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle whose area you want to find:\n");
    scanf("%d",&b);
    int e = rectarea(l,b);
    printf("Enter the radius of circle whose area you want to find:\n");
    scanf("%d",&r);
    float z = cirarea(r);
    printf("Area of Circle is :%f\n",z);
    printf("Area of Rectangle is :%d\n",e);
    printf("Area of square is :%d\n",a);
    return 0;
}

int sqarea(int n){
    return n*n;
}
int rectarea(int n,int d){
    return n*d;
}
float cirarea(int n){
    return 3.14*n*n;
}
