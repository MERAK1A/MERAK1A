#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char op1, op2;

    printf("문자 두 개 입력\n");

    printf("1.첫 번째 문자 입력 :");
    scanf("%c", &op1);
    
    getchar();
    
    printf("2.두 번째 문자 입력 :");
    scanf("%c", &op2);

    // printf("\n");
    printf("첫 번째 문자 출력 : %c\n", op1);
    printf("두 번째 문자 출력 : %c\n", op2);
    

    return 0;
}