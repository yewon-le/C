#include <stdio.h>
int main () {
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