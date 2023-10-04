#include <stdio.h>
int main () {
// 연습2번
//50개의 수(data)를 읽어 들여 그 수가 0보다 크면 pos_sum에 더하고, 0보다 작으면 nega_sum에 더하여 그 결과 pos_sum을 출력하는 프로그램을 작성하시오.

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
}