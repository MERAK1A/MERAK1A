#include<stdio.h>

void buy(void)
{
    printf("차를 구입했습니다. \n");
}

int main(void)
{  
    buy();

    printf("차 1대를 더 구입했습니다. \n");
    
    buy();

    return 0;
}