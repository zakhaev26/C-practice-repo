// #include <stdio.h>
// int main()
// {

//     int num;

//     scanf("%d", &num);

//     for (int i = 2; i <= num; i++)
//     {
//         int flag = 0;

//         for (int j = 2; j <= num; j++)
//         {
//             if (i % j == 0)
//             {
//                 flag++;
//             }
//         }
//         if (flag == 1)
//         {
//             printf("%d is prime\n", i);
//         }
//     }

//     return 0;
// }


//1,1,2,3,5,8,13,....
// #include<stdio.h>


// int main(){

// int ft=1;
// int st=1;

 
// return 0;
// }

#include<stdio.h>

int main(){
int n;
printf("Enter n:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("%d/%d!  ",i,i+1);
    if(i!=n){
        printf("+");
    }
}  4


return 0;
}




//1/2!+2/3!+3/4!




