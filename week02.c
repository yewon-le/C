//#include <stdio.h>
//교재p.54 10번
/* int main() {
    printf("int size = %lu\n", sizeof(int));
    printf("float size = %lu\n", sizeof(float));
    printf("double size = %lu\n", sizeof(double));
    printf("char size = %lu\n", sizeof(char)); 

    return 0;
}*/

//교재p.55 11번
/* int main()
{ 
    printf("%c의 ASCII 값 = %u\n", 'A', 'A');
    printf("%c의 ASCII 값 = %u\n", 'a', 'a');
    printf("%c의 ASCII 값 = %u\n", '0', '0');
    printf("%c의 ASCII 값 = %u\n", ' ', ' ');
    printf("%c의 ASCII 값 = %u\n", '*', '*');

    return 0;
}*/


/* int main() {
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
    */

