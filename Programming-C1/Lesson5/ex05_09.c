#include <stdio.h>

int main(void)
{
    int a, b, c, d;

    printf("정수 2개를 입력\n");

    printf("첫 번째 정수");
    scanf("%d", &a);

    printf("두 번째 정수");
    scanf("%d", &b);

    c = (a > b) ? a : b;
    d = (a < b) ? a : b;

    printf("%d", c);
    printf("%d", d);


    return 0;
}