#include<stdio.h>

int main(void)
{
    int res ;
    int i;

    printf("몇 번째 처리를 건너뛸까요? (1~10)\n");
    scanf("%d",&res);

    for ( i = 0; i <= 10; i++)
    {
        if(res == i)
        {
            continue;
        }
        printf("%d번째 처리입니다.\n", i);
    }
    

    return 0;
}