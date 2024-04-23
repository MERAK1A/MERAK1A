#include <stdio.h>

int main(void)
{
    char input[10];

    // fgets(input, sizeof(input), stdin);
    /* scanf 함수를 사용하면 sizeof 함수를 사용하지 않고 %9s 처럼 명시해두면 된다.*/
    scanf("%9s", input);

    printf("%s", input);


    return 0;
}