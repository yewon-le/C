#include <stdio.h>
int main () {
// 예제 3번
// 0~100점 n명 학생의 성적을 입력 받아 평균과 최고점을 출력하는 프로그램을 작성하시오.

int i, n, score, max =0;
float avg =0;
printf("처리할 데이터의 수: ");
scanf("%d", &n);
printf("%d개의 성적 데이터 입력: \n", n);
for (i=0; i<n; i++) {
    scanf("%d",&score);
    avg +=score;
    if (score>max) max=score;
}
printf("평균: %.2f\n",avg/n);
printf("최대성적: %d\n",max);
}