#include <stdio.h>
// 사칙 연산 계산 
// 사용자로부터 두 개의 숫자와 연산자(+, -, *, /)를 입력 받아 계산하는 프로그램을 작성하세요. 
// 입력된 연산자에 따라 두 숫자를 계산하고 결과를 출력하세요. 
// 단, 사용자가 잘못된 연산자를 입력한 경우 "잘못된 연산자입니다"를 출력하세요. 
// 또한 나눗셈 연산에서 두 번째 숫자가 0인 경우 "0으로 나눌 수 없습니다"를 출력하세요.
// (swith문을 사용할 것, char op;를 이용해 연산자를 입력 받을 것)
int main(void)
{
    float a, b;
    char op;
    float result;
    //두 수와 연산자 입력
    printf("두 수와 연산자를 입력 :");
    scanf("%f %f %c", &a, &b, &op);
    //연산자 종류에 따라 실행
    switch (op)
    {
    case '+':
        result = a + b;
        printf("%f %c %f = %f", a, op, b, result);

        break;
    case '-':
        result = a - b;
        printf("%f %c %f = %f", a, op, b, result);

        break;
    case '*':
        result = a * b;
        printf("%f %c %f = %f", a, op, b, result);

        break;
    case '/':
        if (b == 0)
        {
            printf("0으로 나눌 수 없습니다.");

            break;
        }
        else
        {
        result = a / b;
        printf("%f %c %f = %f", a, op, b, result);

        break;
        }
    default:
        printf("잘못된 연산자입니다.");
        
        break;
    }


    return 0;
}