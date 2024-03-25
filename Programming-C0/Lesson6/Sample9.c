#include<stdio.h>

int main(void)
{   
    int i, j, ch;
    
    ch = 0;

    for ( i = 0; i < 5; i++)// i가 5 보다 작을 때 실행 i++
    {
        for (j = 0; j < 5; j++) // j가 5 보다 작을 때 실행 j++
        {
            if (ch == 0) //ch가 0 일 때 실행
            {
                printf("*");
                ch = 1;
            }
            else
            {
                printf("-");
                ch = 0;
            
            }
        }
        printf("\n");
    }
    

    return 0;
}