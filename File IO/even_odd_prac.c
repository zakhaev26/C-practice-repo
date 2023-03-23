#include<stdio.h>
int main(){

FILE *evenhailavde,*oddhialavde,*ogdatahailavde;

ogdatahailavde=fopen("ogdatahailavde","w");
int n;
while(1){
scanf("%d",&n);
if(n==-1){
    break;
}
else{
    fprintf(ogdatahailavde,"%d\n",n);
}
}
fclose(ogdatahailavde);

ogdatahailavde=fopen("ogdatahailavde","r");
evenhailavde=fopen("evenhailavde","w");
oddhialavde=fopen("oddhialavde","w");

while(fscanf(ogdatahailavde,"%d",&n)!=EOF){
if(n%2==0){
    fprintf(evenhailavde,"%d\n",n);
}
else{
    fprintf(oddhialavde,"%d\n",n);

}

}

fclose(evenhailavde);
fclose(oddhialavde);
fclose(ogdatahailavde);




return 0;
}