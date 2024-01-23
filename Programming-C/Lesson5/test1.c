#include<stdio.h>

int main(void)
{

    //값이 짝수일 경우 짝수 입니다
    //값이 홀수일 경우 홀수 입니다
    int num1;
    
    printf("정수를 입력하세요\n");
    scanf("%d", &num1);

    if (num1%2 == 0 & num1 !=0)
    {
        printf("%d는 짝수입니다.\n",num1);
    }
    else if (num1%2 !=  0)
    {
        printf("%d는 홀수입니다.\n",num1);
    }
    else
        printf("0임");
    
    
    

    




    return 0;

}