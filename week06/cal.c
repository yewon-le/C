#include <stdio.h>
main() {
    int num1=100,num2;
    float ratio =0.5;

    num2=cal(&num1, ratio);
    printf("%d==%d\n", num1,num2);
}
int cal(int *a,float b)
{
    int c;
    c =(*a) *b;
    *a =(*a) *2;
    return c;
}