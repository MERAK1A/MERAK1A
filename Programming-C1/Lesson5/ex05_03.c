#include <stdio.h>

int main(void)
{
    int result, num1;

    printf("두 개의 수를 입력 : ___ ___\b\b\b\b\b\b\b");
    scanf("%d %d", &result, &num1);
    
    result *= num1 - 5;

    printf("%d", result);


    return 0;
}