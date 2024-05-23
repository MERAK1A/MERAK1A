#include <stdio.h>

int main(void)
{
    int num1, num2, val1;

    printf("비트 연산을 수행할 정수 입력 :");
    scanf("%d", &num1);

    printf("왼쪽으로 비트 이동할 정수 입력");
    scanf("%d", &num2);

    val1 = num1 << num2;

    printf("비트 연산 결과 : %d << %d = %d", num1, num2, val1);


    return 0;
}   