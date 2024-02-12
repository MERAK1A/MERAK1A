#include<stdio.h>

int main(void)
{
    char str[100];
    int i;

    printf("문자열을 입력하세요.\n");
    
    scanf("%s", str);

    for (i = 0; str[i] != '\0';){
        i++;
    }
    printf("문자열 크기는 %d입니다.", i);

    
    return 0;
}
