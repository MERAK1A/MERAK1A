#include <stdio.h>


int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int* pA = a;
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, *pA++);
    }
    

    return 0;
}