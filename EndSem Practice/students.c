#include <stdio.h>
#include <string.h>
typedef struct Students
{

    char name[20];
    int grade;
    char branch[5];
    int rno;

} st;

int main()
{

    st studentArray[] = {{"Divya", 99, "CSE",79}, {"Soubhik Gon", 23, "IT",56}, {"Naba", 99, "IT",34}, {"Komlaksh", 101, "ETC",25}};
    int maxMarks = studentArray[1].grade;
    char topper[20];
    char branch[5];

    int rno;
    printf("Enter RNo.:");
    scanf("%d",&rno);

    for(int i=0;i<=3;i++){
        if(rno==studentArray[i].rno){
            printf("Name:%s\nGrade:%d\nBranch:%s\nRoll:%d",studentArray[i].name,studentArray[i].grade,studentArray[i].branch,studentArray[i].rno);
        }
    }

    // for (int i = 0; i <= 3; i++)
    // {

    //     if (maxMarks <= studentArray[i].grade)
    //     {
    //         maxMarks = studentArray[i].grade;
    //         strcpy(topper, studentArray[i].name);
    //         strcpy(branch, studentArray[i].branch);
    //     }
    // }

    // printf("Topper =%s\n Branch = %s \n Grade = %d", topper, branch, maxMarks);

    return 0;
}