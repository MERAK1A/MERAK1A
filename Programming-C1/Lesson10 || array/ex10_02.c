#include <stdio.h>

#define arr 3

int main(void)
{
    int score[arr];
    int cnt = 0;
    int sum = 0;


    printf("세 개의 과목 점수 입력\n");

    for (cnt = 0; cnt < arr; cnt++)
    {
        
        scanf("%d", &score[cnt]);
    }
    
    for (cnt = 0; cnt < arr; cnt++)
    {
        sum += score[cnt];
    }
    printf("%d", sum);
    

    return 0;
}