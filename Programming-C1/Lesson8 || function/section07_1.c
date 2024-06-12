#include <stdio.h>
#include <stdlib.h>

void num(int *num1, int *num2);
void op_input(int num1, int num2);
void op_plus(int num1, int num2);
void op_minus(int num1, int num2);
void op_multiply(int num1, int num2);
void op_division(int num1, int num2);
void end();
void op_err();

int main(void)
{
    char YN;

    do
    {
        printf("[main() 함수 영역]\n");
        printf("사칙연산 계산기 프로그램 시작하겠습니까?(Y / N)\n");
        printf(":");
        scanf(" %c", &YN);  //공백을 사용해서 버퍼 문제 해
        
        switch (YN)
        {
        case 'Y':
        case 'y':
            {
                int num1, num2;
                num(&num1, &num2);
                op_input(num1, num2);
                break;
            }
        
        case 'N':
        case 'n':
            end();
            break; 
        }
    } while (1);
}

void num(int *num1, int *num2)
{
    printf("수 입력 : ");
    scanf("%d %d", num1, num2);
}

void op_input(int num1, int num2)
{
    int op;

    printf("연산자 입력 : 1(+), 2(-), 3(*), 4(/)\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        op_plus(num1, num2);
        break;
    
    case 2:
        op_minus(num1, num2);
        break;
    
    case 3:
        op_multiply(num1, num2);
        break;

    case 4:
        op_division(num1, num2);
        break;

    default:
        op_err(num1, num2);
        break;
    }
}

void op_plus(int num1, int num2)
{
    int plus = num1 + num2;
    printf("더하기 실행 : %d + %d = %d\n\n", num1, num2, plus);
}

void op_minus(int num1, int num2)
{
    int minus = num1 - num2;
    printf("빼기 실행 : %d - %d = %d\n\n", num1, num2, minus);
}

void op_multiply(int num1, int num2)
{
    int multiply = num1 * num2;
    printf("%d * %d = %d\n\n", num1, num2, multiply);
}

void op_division(int num1, int num2)
{
    if (num2 != 0)
    {
        int division = num1 / num2;
        printf("%d / %d = %d\n\n", num1, num2, division);
    }
    else
    {
        printf("0으로 나눌 수 없습니다.\n\n");
    }
}
void op_err(int num1, int num2)
{
    printf("입력 범위를 벗어남\n");
    op_input(num1, num2);
}
void end()
{
    printf("프로그램 종료\n");
    exit(0);
}
