#include <stdio.h>

//키보드로부터 임의의 세 개의 정수를 입력받아 합과 평균을 구하여 출력하는 프로그램을 작성하시오. 
//단, 세 개의 정수는 빈칸으로 구분하여 입력
//평균은 소수점 이하 2자리까지 출력
int main(void)
{
    int num1, num2, num3, hap;
    float average;

    printf("임의의 세 개의 정수를 입력받아 합과 평균을 구하는 프로그램\n");
    printf("세 개의 정수를 입력 :");
    scanf("%d %d %d", &num1, &num2, &num3);

    hap = num1 + num2 + num3;
    average = (float)hap / 3;

    printf("합 : %d + %d + %d = %d\n", num1, num2, num3, hap);
    printf("평균 : %.2f", average);


    return 0;
}