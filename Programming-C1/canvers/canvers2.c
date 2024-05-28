#include <stdio.h>


int main(void)
{
    char *pAry[5] = {"On", "Off", "Stay"};

    int i;

    for ( i = 0; i < 3; i++)
    {
        printf("%s\n", pAry[i]);
    }
    

    return 0;
} 