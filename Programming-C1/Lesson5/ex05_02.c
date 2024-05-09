#include <stdio.h>
#define TM 60


int main(void)
{
    int num1, m, s;

    printf("숫자 입력 : ____\b\b\b\b");
    scanf("%d", &num1);

    m = num1 / TM;
    s = num1 % TM;

    printf("%d분 %d초", m, s);


    return 0;
}