#include <stdio.h>

int num1 = 9;

char word[] = "전역 변수";

int main(void)
{
    char word[] = "지역 변수";

    printf("지역 변수, 전역 변수\n");
    printf("출력>  = %s", word);


    return 0;
}