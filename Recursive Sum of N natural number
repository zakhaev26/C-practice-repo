#include <stdio.h>
int sumtilln(int n);
int main()
{
    int num, sum;
    printf("Enter a number:\n");
    scanf("%d", &num);
    sum = sumtilln(num);
    printf("The sum is :%d\n", sum);

    return 0;
}

int sumtilln(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sum = n + sumtilln(n - 1);
    return sum;
}
