#include <stdio.h>
int main()
{

    FILE *fp1, *fp2;
    char text[100];
    fp1 = fopen("text", "w");

    fgets(text, 100, stdin);
    fprintf(fp1, "%s", text);
    fclose(fp1);

    fp1 = fopen("text", "r");
    fp2 = fopen("copiedfile", "w");
    char ch;
    while ((ch = fgetc(fp1)) != EOF)
    {
        fprintf(fp2, "%c", ch);
    }
    printf("Task Done.");
    fclose(fp1);
    fclose(fp2);

    // fp2 = fopen("copiedfile", "r");

    // while ((ch = fgetc(fp2)) != EOF)
    // {
    //     fprintf(stdout, "%s", ch);
    // }

    // fclose(fp2);
    return 0;
}
