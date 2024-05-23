#include <stdio.h>

int main(void)
{
    int num1 = 5, num2 = 3;

    printf("int num1 = 5, num2 = 3;\n");

    float result = num1 / num2;
    
    printf("float result = num1 / num2 = %f\n", result);

    result = (float)num1 / num2; //캐스트 연산자를 사용해서 num1의 자료형을 float 형으로 변경

    printf("result = (float)num1 / num2 = %f", result);


    return 0;
}