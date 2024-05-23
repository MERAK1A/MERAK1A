#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 45


int main(void)
{
    int cnt;

    printf("1~45 중 6가지 출력\n");
    srand((unsigned)time(NULL));

    printf("srand 출력 :");
    for (cnt = 1; cnt <= 6; cnt++)
    {
        printf("%d  ", 1 + (rand() % NUM));
    }


    return 0;
}