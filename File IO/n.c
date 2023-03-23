// #include<stdio.h>

// typedef struct student{
//     int roll;
//     char name[20];
//     int marks;
// }st;

// int main(){
// int n;
// printf("Enter N:");
// scanf("%d",&n);

// st student[n]={};

// for(int i=0;i<=n-1;i++){
//     printf("Enter student %d th details:\n",i+1);
//     scanf("%d",&student[i].roll);
//     getchar();
//     fgets(student[i].name,100,stdin);
//     scanf("%d",&student[i].marks);
//     getchar();
// }

// int check;
// printf("enter rno.:");
// scanf("%d",&check);

// for(int i=0;i<=check;i++){
//     if(student[i].roll==check){
//        printf("%s\n",student[i].name); 
//        printf("%d\n",student[i].marks);
        
//     }
// }

// return 0;
// }


#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    int roll;
    char name[20];
    int marks;
} st;

int main(){
    int n;
    printf("Enter N:");
    scanf("%d",&n);

    st* student = (st*) malloc(n * sizeof(st));

    for(int i = 0; i < n; i++){
        printf("Enter student %d th details:\n", i+1);
        scanf("%d",&student[i].roll);
        getchar();
        fgets(student[i].name, 20, stdin);
        scanf("%d",&student[i].marks);
        getchar();
    }

    int check;
    printf("Enter rno.:");
    scanf("%d",&check);

    for(int i = 0; i < n; i++){
        if(student[i].roll == check){
            printf("%s\n", student[i].name);
            printf("%d\n", student[i].marks);
            break;
        }
    }

    free(student);

    return 0;
}
