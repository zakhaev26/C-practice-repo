#include <stdio.h>

// A man can climb up a stair in 2 ways :
//  either it can take 1 step at a time or
// it can take 2 steps at a time.
// If the user enters the number of stairs "n",
// return the ways of getting to the top of the stairs.
int fib(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{

    while (1)
    {
        int stairs;
        printf("Enter number of Stairs:");
        scanf("%d", &stairs);
        if (stairs == 2)
        {
            printf("%d\n", 2);
        }
        else
        {
            printf("%d\n", fib(stairs));
        }
    }

    return 0;
}