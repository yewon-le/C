#include <stdio.h>
int main () {
// p.79

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
}