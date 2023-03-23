#include<stdio.h>
#include<stdlib.h>

int main(){


int *ptr;
ptr=(int *)calloc(5,sizeof(int));

for(int i=0;i<=3;i++){
    scanf("%d",&ptr[i]);
}

ptr=realloc(ptr,10);

for(int i=4;i<=9;i++){
    scanf("%d",&ptr[i]);
}

for(int i=0;i<=9;i++){
printf("%d\n",ptr[i]);

}

return 0;
}