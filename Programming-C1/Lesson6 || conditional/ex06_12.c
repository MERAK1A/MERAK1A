#include <stdio.h>

int main(void)
{
    int num1, num2, hap, cha, gob;
    double na;
    char op;

    printf("정수 2개와 연산자를 입력 : ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        hap = num1 + num2;
        printf("%d + %d = %d", num1, num2, hap);
        break;

    case '-':
        cha = num1 - num2;
        printf("%d - %d = %d", num1, num2, cha);
        break;

    case '/':
        na = (float)num1 / num2;
        printf("%d / %d = %f", num1, num2, na);
        break;

    case '*':
        gob = num1 * num2;
        printf("%d * %d = %d", num1, num2, gob);
        break;
        
    default:
        printf("사용 불가한 연산자");
        break;
    }


    return 0;
}