#include<stdio.h>
int main(){


FILE *fp1,*fp2,*fp3;

fp1=fopen("data","w");
int number;
for(int i=1;i<=100;i++){

    scanf("%d",&number);
    if(number==-1){
        break;
    }
    else{
        putw(number,fp1);
    }
    
}

fclose(fp1);

fp1=fopen("data","r");
fp2=fopen("EVEN","w");
fp3=fopen("ODD","w");

while((number=getw(fp1))!=EOF){
    if(number%2==0){
        putw(number,fp2);
    }
    else{
        putw(number,fp3);
    }
}

fclose(fp1);
fclose(fp2);
fclose(fp3);

fp2=fopen("EVEN","r");
fp3=fopen("ODD","r");

while((number=getw(fp2))!=EOF){
    printf("%d",number);
}

printf("\n");

while((number=getw(fp3))!=EOF){
    printf("%d",number);
}

fclose(fp2);
fclose(fp3);

return 0;
}

