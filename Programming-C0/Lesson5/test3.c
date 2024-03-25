#include<stdio.h>

int main(void)
{                              //값이 0~10인 경우 -> 정답       
    int num1;                  //그 외의 경우 -> 틀림
    
    printf("0부터 10까지의 정수 중 하나를 입력하세요.\n");

    scanf("%d", &num1);

    if (num1 >= 0 && num1 <=10)
    {
        printf("정답입니다.");
    }
    else {
        printf("틀림");
    }
    

    return 0;
}