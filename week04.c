#include <stdio.h>
int main () 
{
/*
    //p.73
     float cel, fah;
    int n = 0;
    
    printf("섭씨온도: ");
    scanf("%f", &cel);

    while ( cel > -50 ) {
        fah = cel * (1.8) +32; 
        printf("화씨온도: %.2f\n", fah);
        n++;
        printf("섭씨온도.");
        scanf("%f",cel);
    }
    printf("%d data processed ...", n);
    
} 
*/

//76
/*
int i, answer, score=0, num, correct;
for (i=0; i<5; i++) {
correct = 0;
num=0;
while (num < 3 && !correct) {
printf("%d + %d = ", i*i, i*10);
scanf("%d", &answer);
if (answer == (i*i)+(i*10)) {
printf("Correct!!\n");
correct = 1;
score += (20-num*3);
}
else
printf("Try Again!!\n");
num++;
}
}
printf("당신의 덧셈성적은 ? %d\n", score);
}
*/

//108-3
/*
int num, n, p, count = 0;
printf("양의정수 입력 : ");
scanf("%d", &n);
num = n;
while ((num % 2) == 0) {
printf("%4d", 2); // ①
num = num / 2;
count++;
}
p=3;
while (num != 1) {
if ((num % p) == 0) {
printf("%4d", p); // ②
num = num / p;
count++;
}
else p=p+2;
}
printf("\ncount = %d\n", count); //③

}
*/

// p.79
/*
int n, lcv, data, pnum=0;
double pavg=0;
printf("How many data to be processed...");
scanf("%d", &n);
printf("\n Input %d data : \n", n);
for(lcv=0; lcv<n; lcv++){
 scanf("%d", &data);
if (data > 0) {
 pnum++;
 pavg += data;
}
}
 printf("The number of positive numbers : %d\n", pnum);
 printf("Average of positive numbers = %.2f", pavg/pnum);
*/


}
