#include<stdio.h>

int main(void) 
//오랜만에 reminde scanf 연속 사용 \n
{
    char a, b; 

    scanf("%c\n", &a);
    scanf("%c", &b);

    printf("%c, %c", a, b);


    return 0;
}