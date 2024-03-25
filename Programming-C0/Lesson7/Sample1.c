#include<stdio.h>

int main(void)
{
    int test[5];
    int i;

    test[0] = 80;
    test[1] = 60;
    test[2] = 22;
    test[3] = 50;
    test[4] = 75;

    int plus = 0;

    for (i = 0; i<5; i++){
        printf("%d번째 사람의 점수는 %d입니다.\n",i+1,test[i]);
        plus += test[i];
    }
    printf("총 점수는%d입니다.\n",plus);

    return 0;
}