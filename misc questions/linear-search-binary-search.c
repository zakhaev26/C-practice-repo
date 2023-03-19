#include<stdio.h>
int main(){

int arr[]={1,56,34,23,78,9,2,53};
for(int i=0;i<=7;i++){
    printf("%d\t",arr[i]);
    
}
int num;
printf("\n");
printf("Enter the element you want to search:\n");
scanf("%d",&num);


// Linear Search..
for(int i=0;i<=7;i++){
    if(arr[i]==num){
        printf("The element is present at index no.%d\n",i+1);
    }
}

//Binary Search..
int arr2[]={1,2,9,23,34,53,56,78};

for(int i=0;i<8/2;i++){
    if(arr2[i]==num){
        printf("The element is present at index no.%d\n",i+1);
    }
}
for(int j=8/2;j<=7;j++){
    if(arr2[j]==num){
        printf("The element is present at index no.%d\n",j+1);

    }
}

       
 
    
return 0;
}
