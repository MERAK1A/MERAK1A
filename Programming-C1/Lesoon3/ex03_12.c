#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, cha;

    printf("1.두 개의 정수 입력 :");
    scanf("%d %d", &num1, &num2);

    cha = num1 - num2;

    printf("2.뺄셈 결과 :%d - %d = %d", num1, num2, cha);


    return 0;
}