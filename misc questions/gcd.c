// #include <stdio.h>
// int main()
// {
//     int count;
//     int num1, num2, gcd, min;
//     gcd = 1;
//     printf("enter num1:\n");
//     scanf("%d", &num1);
//     printf("enter num2:\n");
//     scanf("%d", &num2);
//     if (num1 > num2)
//     {
//         min = num2;
//     }
//     else
//     {
//         min = num1;
//     }

//     for (int i = 1; i <= min; i++)
//     {
//         count = 0;
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 count++;
//             }
//         }
//         if (count == 2) // got prime numbers..
//         {
//             if (num1 % i == 0 && num2 % i == 0)
//             {
//                 gcd = gcd * i;
//             }
//         }
//     }
//     printf("%d", gcd);
//     return 0;
// }
