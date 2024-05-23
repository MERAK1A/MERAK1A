#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("title 정수 2개 입력받아 덧셈 계산");
    
    int num1, num2, hap;
    // scanf("%d %d", &num1, &num2, sizeof(num1), sizeof(num2));

    printf("1.첫 번째 정수입력");
    scanf("%d", &num1);

    printf("2.두 번째 정수입력");
    scanf("%d", &num2);

    hap = num1 + num2;

    printf("3.덧셈 결과 : %d + %d = %d", num1, num2, hap);
    

    return 0;
}