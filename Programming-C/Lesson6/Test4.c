#include <stdio.h>

int main(void)
{
    int j;
    int i;

    for ( i = 0; i < 5; i++)
    {
            for ( j = 0; i  >= j; j++)
            {
                printf("*");
            }
            
        printf("\n");
    }
    

    return 0 ;
}