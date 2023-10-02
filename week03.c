#include <stdio.h>
int main () {

// 연습1번
// 세 수를 읽어 들여서 그 중 가장 큰 값을 찾아 출력하는 프로그램에 대한 프로그램을 작성하시오.
 /*
 int n1,n2,n3,large;

 printf("enter three integers: ");
 scanf("%d %d %d", &n1, &n2, &n3);

 if (n1>n2) large =n1;
 else large = n2;

 if (n3>large) large =n3;

 printf("the largest value: %d\n", large);
*/

// 연습2번
//50개의 수(data)를 읽어 들여 그 수가 0보다 크면 pos_sum에 더하고, 0보다 작으면 nega_sum에 더하여 그 결과 pos_sum을 출력하는 프로그램을 작성하시오.
/*
 int count=0, data, pos_sum=0, nega_sum=0;
     int n;

     printf("Input the number of data to be processed : ");
     scanf("%d", &n);
     printf("Input %d numbers : \n", n);
     while (count < n) {
        scanf("%d", &data);
        if (data > 0) pos_sum = pos_sum + data;
        else nega_sum = nega_sum + data;
        count++;
     }

     printf("The sum of positive numbers : %d\n", pos_sum); 
     printf("The sum of negative numbers : %d\n", nega_sum); 
*/

// 예제 1번
// n개의 양의 정수를 입력받아 홀수의 합과 짝수의 합을 출력하는 프로그램을 작성하시오.
/*
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
*/

// 예제 2번
// 양의 정수를 읽어 끝자리 숫자부터 출력하는 프로그램을 작성하시오.
/*
int r,num;
printf("숫자를 입력하세요 : ");
scanf("%d", &num);
while( num!=0 ) {
    r = num %10;
    num = num / 10;
    printf ("%d ",r);
}
*/

// 예제 3번
// 0~100점 n명 학생의 성적을 입력 받아 평균과 최고점을 출력하는 프로그램을 작성하시오.
/*
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
*/

// 예제4번
// n을 입력받고 다음의 sum과 psum을 계산하여 출력하는 프로그램을 작성하시오.
// ssum = 1 + (1+2) + . . . . (1+2+. . .+n)
// psum = 1 + (1*2) + . . . . (1*2*. . .*n)
/*
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
*/

// 예제5번
// 0이나 음수가 나올 때까지 양수를 읽은 후, 입력된 데이터수와 최대값을 출력하는 프로그램을 작성하시오(첫 데이터가 음수인 경우 “no data"를 출력한다
/*
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
*/


return 0;
}
