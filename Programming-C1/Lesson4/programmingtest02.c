#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    const float mile = 1.61;
    float num2, km;

    printf("마일을 소수 둘째자리까지 입력 :");

    scanf("%f", &num2);

    km = mile * num2;

    printf("%.2f마일은 %.2fkm입니다.", num2, km);


    return 0;
}