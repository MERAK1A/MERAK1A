#include <stdio.h>

int main(void)
{
    char alpa;

    printf("대소문자를 판별하는 프로그램\n");

    printf("알파벳 입력 :");
    scanf("%c", &alpa);

    printf("알파벳 %c는 ", alpa);

    if (alpa >= 'A' && alpa <= 'Z')
    {
        printf("대문자");
    }

    else if (alpa >= 'a' && alpa <= 'z') 
    {
        printf("소문자");
    }

    else
    {
        printf("판별 대상이 아님");
    }
    
    



    return 0;
}