#include <stdio.h>

int Add(int num1, int num2);

int main(void)
{
    int a = 10;
    int b = 20;
    int hap = 0;

    printf("매개변수 2개의 덧셈\n");
    printf("%d, %d Add로 전달\n", a, b);

    hap = Add(a, b);

    printf("[main()함수 영역]\n");
    printf("결과 %d\n", hap);


    return 0;
}

int Add(int num1, int num2)
{
    int result;

    printf("[Add()함수 영역]\n");
    printf("연산결과를 main()함수에 반환\n");

    result = num1 + num2;
    
    printf("%d 반환\n", result);


    return result;
}