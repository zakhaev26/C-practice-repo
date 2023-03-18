#include<stdio.h>
int main(){


FILE *fp;

printf("Enter data to be stored in the file:\n");
fp = fopen("NewFile","w");

char text[100];

fgets(text,100,stdin);
fprintf(fp,text);

fclose(fp);


return 0;
}