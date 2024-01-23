#include<stdio.h>

int main(void)
{
    //값이 같은 경우 -> 같은 값입니다.
    //크거나 작은 경우 -> 값이 크다,작다.

    int num1;
    int num2;

    printf("두 개의 정수를 입력하세요.\n");

    scanf("%d\n%d",&num1,&num2);

    if (num1 == num2)
    {
        printf("두 수의 값은 같은 값입니다.");
    }
    else if (num1 > num2)
    {
        printf("%d가 %d보다 큼",num1,num2);
    }
    else if (num1 <num2)
    {
        printf("%d가 %d보다 작음",num1,num2);
    }
    
    
    
    






    return 0;

}