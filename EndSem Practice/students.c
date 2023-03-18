#include <stdio.h>
#include <string.h>
typedef struct Students
{

    char name[20];
    int grade;
    char branch[5];

} st;

int main()
{

    st studentArray[] = {{"Divya", 99, "CSE"}, {"Soubhik Gon", 23, "IT"}, {"Naba", 99, "IT"}, {"Komlaksh", 101, "ETC"}};
    int maxMarks = studentArray[1].grade;
    char topper[20];
    char branch[5];
    for (int i = 0; i <= 3; i++)
    {

        if (maxMarks <= studentArray[i].grade)
        {
            maxMarks = studentArray[i].grade;
            strcpy(topper, studentArray[i].name);
            strcpy(branch, studentArray[i].branch);
        }
    }

    printf("Topper =%s\n Branch = %s \n Grade = %d", topper, branch, maxMarks);

    return 0;
}