#include <stdio.h>

int main(void)
{
    int i;
    int num1 = 0;
    printf("2 이상의 정수를 입력하세요. \n");
    scanf("%d", &num1);

    for ( i = 2; i <= num1; i++)
    {   
        if (i == num1)
        {
            printf("%d 소수 입니다.\n", num1);

        }
        else if (num1 % i == 0)
        {
            printf("%d은 소수가 아닙니다. \n", num1);
            break;
        }
        
        
       
    }
    

    return 0;
}