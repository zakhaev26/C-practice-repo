#include<stdio.h>
int main(){

FILE *fp1,*fp2,*fp3;
int num1,num2;
fp1=fopen("DATA1","w");
fp2=fopen("DATA2","w");

while(1){
    scanf("%d",&num1);
    if(num1==-1){
        break;
    }
    else{
        putw(num1,fp1);
    }
    printf("\n");
}
printf("File 1 written.");
while(1){
    scanf("%d",&num2);
    if(num2==-1){
        break;
    }
    else{
        putw(num2,fp2);
    }
    printf("\n");
}

fclose(fp1);
fclose(fp2);
fp1=fopen("DATA1","r");
fp2=fopen("DATA2","r");
fp3=fopen("DATA","w");
int number1,number2;
while((number1=getw(fp1))!=EOF ||(number2=getw(fp2))!=EOF){
    fprintf(fp3,"%d %d",number1,number2);
}
fclose(fp2);
fclose(fp1);
fclose(fp3);


return 0;
}