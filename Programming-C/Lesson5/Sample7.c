#include<stdio.h>

int main(void)
{
    int res;
    char ans;

    printf("몇 번쨰를 선택할까요?\n");
    printf("정수를 입력하세요.\n");

    scanf("%d", &res);

    ans = (res == 1) ? 'A' : 'B' ; // 조건 ? 가 참이면 식1 : 거짓이면 식

    printf("%c 코스르 선택함", ans);


    return 0;
}