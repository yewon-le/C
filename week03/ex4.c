#include <stdio.h>
int main () {
    // 예제 2번
// 양의 정수를 읽어 끝자리 숫자부터 출력하는 프로그램을 작성하시오.

int r,num;
printf("숫자를 입력하세요 : ");
scanf("%d", &num);
while( num!=0 ) {
    r = num %10;
    num = num / 10;
    printf ("%d ",r);
    }
}