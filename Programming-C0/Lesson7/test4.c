#include <stdio.h>

int main(void)
{
    char str[100];
    int i;
    int a = 0;

    printf("문자열을 입력하세요.\n");

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a'){
            a++;
        }
    }
    printf("%s 안에 a는 %d개 있습니다.", str, a);


    return 0;
}