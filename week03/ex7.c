#include <stdio.h>
int main () {
// 예제5번
// 0이나 음수가 나올 때까지 양수를 읽은 후, 입력된 데이터수와 최대값을 출력하는 프로그램을 작성하시오(첫 데이터가 음수인 경우 “no data"를 출력한다

int num, size =0, max=0 ;
printf("데이터 입력: \n");
scanf("%d", &num);
while (num>0) {
    size++;
    if (num > max) max= num;
    scanf ("%d",&num);
}
printf("데이터의 수: %d\n", size);
if (size) printf("최대값 : %d\n", max); //if(size!=0)와 같다
else printf("No data\n");
}