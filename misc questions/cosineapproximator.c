#include<stdio.h>
#include<math.h>

float degtoradiansconvertor(float n){
    return 22.0*n/(180.0*7.00);
}

float fact(int x){
    if(x==0||x==1){
        return 1.000;
    }
    int factorial =1;
    return factorial = x*fact(x-1);
}
float cosineconvertor(float x){
    return 1-pow(x,2)/fact(2)+pow(x,4)/fact(4)-pow(x,6)/fact(6)+pow(x,8)/fact(8);
//     for(int i=10;i>=0;i--){
//     int count=1;
    
//     if(count%2==0){
//         return pow(x,i)/fact(i) + cosineconvertor(x-1);
//     }
//     else{
//         return -pow(x,i)/fact(i) + cosineconvertor(x-1);
//     }
//     count++;
// }
}

int main(){
    float y;
    printf("Enter a degree:\n");
    scanf("%f",&y);
float f= degtoradiansconvertor(y);
float x =cos(f);
printf("Comp ans = %f\n",x);
printf("func ans = %f",cosineconvertor(f));



return 0;
}
