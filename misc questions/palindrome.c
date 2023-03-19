#include <stdio.h>
int main()
{

    int num, u, t, h, th, ten_th;

    while (2 > 1)
    {
        printf("Enter a 5 digit number:\n");
        scanf("%d", &num);
        u = num % 10;
        t = ((num % 100) - u) / 10;
        h = ((num % 1000) - t) / 100;
        th = ((num % 10000) - h) / 1000;
        ten_th = ((num % 100000) - th) / 10000;
        // printf("%d \t  %d  \t  %d \t %d \t %d ",u,t,h,th,ten_th);

        if (u == ten_th && t == th)
        {
            printf("Palindrome!\n");
        }
        else
        {
            printf("Not Palindrome!\n");
        }
    }
    return 0;
}
