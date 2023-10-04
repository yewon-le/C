#include <stdio.h>
int main() {
    int ch, i, nwhite, nother, ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
    ndigit[i] = 0;
    printf("Input characters :\n");
    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9')
        ndigit
        [ch - '0']++;
        else if (ch == ' ' || ch == '\t')
        nwhite++;
        else
        nother++;
    }

    for (i = 0;i < 10;i++)
    printf("숫자의 갯수 : %d\n",' ' );
    printf("공백문자의 갯수 : %d\n", ' ');
    printf("나머지 문자의 갯수 : %d\n",' ');

    return 0;
    }