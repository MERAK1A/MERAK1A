#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, result;

    printf("입력한 정수를 홀수인지 짝수인지 판별하는 프로그램\n");

    printf("정수 입력 :");
    scanf("%d", &num1);

    result = num1 % 2;

    printf("정수 %d는 ", num1);
    
    if (result != 0)
    {
        printf("홀");
    } 
    
    else
    {
        printf("짝");
    }    


    return 0;
}