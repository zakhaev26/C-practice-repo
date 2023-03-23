#include<stdio.h>
int main(){


FILE *fp1;
int num;
fp1= fopen("Bhsdk","w");

while(1){
    scanf("%d",&num);
    if(num==-1){
        break;
    }
    else{
        fprintf(fp1,"%d\n",num);
    }
}

fclose(fp1);

fp1=fopen("Bhsdk","r");
int sum=0;
while(fscanf(fp1,"%d",&num)!=EOF){
sum+=num;
}
fclose(fp1);

fp1=fopen("Bhsdk","a");

fprintf(fp1,"%d",sum);

printf("%d",sum);
return 0;
}
