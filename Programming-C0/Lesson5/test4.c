#include<stdio.h>
#include<ctype.h>

int main(void)
{               //A~C까지의 문자 중 하나를 입력 -> 정답
    char ch;    //그 외의 경우 -> 틀림
        
    printf("A~C까지의 문자 중 하나를 입력\n");
    scanf("%c", &ch);

    ch = toupper(ch);

    if (ch >= 'A' && ch <= 'C')
    {
        printf("정답입니다.");
    }
    else
    {
        printf("틀림");
    }
    

    return 0;
}