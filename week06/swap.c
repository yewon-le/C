
#include <stdio.h>
void swap (int,int);

main (){
    int x,y,z;
    printf("세 수를 입력하시오");
    scanf("%d%d%d", &x,&y,&z);
    if (x>y) swap (&x,&y);
    if (y>z) swap (&y,&z);
    if (x>y) swap (&x,&y);
    printf("%d **** %d **** %d\n", x,y,z);
}

void swap (int a,int b)
{
    int temp;
    temp= a;
    a = b;
    a = temp;
}