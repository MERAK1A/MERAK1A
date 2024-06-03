#include <stdio.h>
// 구구단 출력하기
// 1단부터 9단까지의 구구단을 출력하는 프로그램을 작성하세요. 
// 각 구구단은 한 줄에 출력 되어야 하며, 
// 각 단마다 1부터 9까지의 숫자와 곱셈 결과를 출력하세요.


int main(void)
{
    int MT1, MT2, result;

    printf("구구단 출력 프로그램\n");

    //단 수를 출력
    for (MT1 = 1; MT1 < 10; MT1++)
    {
        printf("%d단", MT1);

        for (MT2 = 1; MT2 < 10; MT2++)// 구구단 계산
        {   
            result = MT1 * MT2;
            printf(" %d * %d = %d |", MT1, MT2, result);
        }
        
        printf("\n\n");
    }


    return 0;
}