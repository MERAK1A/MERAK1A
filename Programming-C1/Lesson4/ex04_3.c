#include <stdio.h>

int main(void) // 언더플로(underflow) 발생
{
    unsigned short a, b, result;

    printf("usigned short형 유효 범위 : 0 ~ 65,535\n");
    printf("1정수 입력");
    scanf("%hu", &a);
    printf("2정수 입력");
    scanf("%hu", &b);

    result = a + b;
    printf("%hu - %hu = %hu", a, b, result);

    return 0;
}