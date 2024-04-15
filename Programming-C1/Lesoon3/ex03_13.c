#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    char str[10];

    // printf("1. 문자 입력 :");
    // scanf("%c", &ch, sizeof(ch));
    printf("2.이름 입력:");
    scanf("%s", str, sizeof(str));

    printf("이름은 %s입니다.", str);


    return 0;
}