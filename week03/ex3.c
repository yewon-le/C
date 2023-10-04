#include <stdio.h>
int main () {
// 예제 1번
// n개의 양의 정수를 입력받아 홀수의 합과 짝수의 합을 출력하는 프로그램을 작성하시오.

int i,n;
int oddsum=0, evensum=0;
int num;

printf("처리데이터 수를 입력하세요 : ");
scanf("%d", &n);
for (i=0; i<n; i++){
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    if(num%2)
    oddsum += num;
    else
    evensum += num;
}
printf("oddsume=%d evensum=%d", oddsum, evensum);
}