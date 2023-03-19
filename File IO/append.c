#include<stdio.h>
int main(){


FILE *fp1;

fp1=fopen("append","a+");
char text[100];
fgets(text,100,stdin);
fputs(text,fp1);
fclose(fp1);

return 0;
}