#include<stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;

    printf("시험점수를 일력하세요. (0이면 종료)\n");
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &num1);
        num2 += num1;
        if (num1 == 0)
        {
            break;
        }
        
    }
    printf("시험 점수의 합계는 %d점입니다.",num2);

    
    return 0;
}