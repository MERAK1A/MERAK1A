#include <stdio.h>


int main(void)
{
    int num1, mtable, result;

// replay:
//     goto replay;
    printf("구구단 프로그램");
    printf("수 입력 :");
    scanf("%d", &num1);

    for ( mtable = 1; mtable < 10; mtable++)
    {
        result = mtable * num1;
        printf("구구단 %d * %d  = %d\n",num1, mtable, result);
    }
    


    return 0;
}