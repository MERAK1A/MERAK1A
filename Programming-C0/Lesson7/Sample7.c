#include<stdio.h>

int main(void)
{
    //char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    char str[6];

    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = '0';

    printf("%s는 문자열입니다.\n", str);


    return 0;
}
