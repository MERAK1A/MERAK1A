#include <stdio.h>

int main(void)
{
    char input[10];
    
    printf("문자열 입력 : ");
    scanf("%s", input, sizeof(input));

    printf("입력한 문자열 출력 : %s", input);


    return 0;
}