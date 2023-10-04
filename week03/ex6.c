#include <stdio.h>
int main () {
    // 예제4번
// n을 입력받고 다음의 sum과 psum을 계산하여 출력하는 프로그램을 작성하시오.
// ssum = 1 + (1+2) + . . . . (1+2+. . .+n)
// psum = 1 + (1*2) + . . . . (1*2*. . .*n)

int n, i, j, ssum =0, temp1, temp2;
long psum =0;

printf("Enter n: ");
scanf("%d", &n);
for (i=1; i<=n; i++) {
    temp1 =0;
    temp2 =1;
    for (j=1; j<=i; j++) {
        temp1=temp1+j;
        temp2=temp2*j;
    }
    ssum+=temp1;
    psum+=temp2;
    }
    printf("ssum=%d\n",ssum);
    printf("psum=%ld\n", psum);
}