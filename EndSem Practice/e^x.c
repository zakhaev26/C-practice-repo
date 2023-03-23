#include <stdio.h>
#include <math.h>

#define e 2.718

int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}

double eulercalc(int x, int num)
{
    double val = 0;
    for (int i = num; i >= 0; i--)
    {
        val += (float)pow(x, i) / (float)fact(i);
    }
    return val;
}

// float eulercalc(int x, int num) {
//     float val = 0;
//     for (int i = num; i >= 0; i--) {
//         val += (float) pow(x, i) / (float) fact(i);
//     }
//     return val;
// }

int main(){

    printf("%f\n", pow(e, 2));
    printf("%f", eulercalc(2,5));

    return 0;
}

// #include <stdio.h>
// #include <math.h>

// #define E 2.718

// int fact(int num) {
//     if (num == 0 || num == 1) {
//         return 1;
//     } else {
//         return num * fact(num - 1);
//     }
// }

// float eulercalc(int x, int num) {
//     float val = 0;
//     for (int i = num; i >= 0; i--) {
//         val += (float) pow(x, i) / (float) fact(i);
//     }
//     return val;
// }

// int main() {

//     printf("%f\n", pow(E, 2));
//     printf("%f", eulercalc(2, 5));

//     return 0;
// }
