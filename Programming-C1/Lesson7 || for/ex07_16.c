#include <stdio.h>


int main(void)
{
    int hap, cnt, num1;

    printf("정수를 입력하면 짝수의 누적합 구하는 프로그램\n");
    printf("정수 입력 :");
    scanf("%d", &num1);

    for (cnt = 0; cnt <= num1; cnt++)
    {
        if ((cnt % 2)!= 0 )
        {
            continue;
        }
        else
            hap += cnt;

            printf("%d  ", cnt);
    }
    
    if ((cnt % 20) == 0)
    {
        printf("\n");
    }

    printf("\n1부터 %d까지의 짝수의 합 :", hap);


    return 0;
}