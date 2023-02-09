#include <stdio.h>

typedef struct complexno
{
    int real;
    int img;
} cn;

cn addcomplex(cn cn1, cn cn2)
{
    cn returner;
    returner.real = cn1.real + cn2.real;
    returner.img = cn1.img + cn2.img;
    return returner;
}

int main()
{
    cn cn1, cn2;

    cn1.real = 3;
    cn1.img = 4;
    cn2.real = 5;
    cn2.img = 6;

    cn final_answer = addcomplex(cn1, cn2);
    printf("%d +%d i", final_answer.real, final_answer.img);
    return 0;
}
