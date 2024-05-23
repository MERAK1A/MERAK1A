#include <stdio.h>

int main(void)
{
    int a, b, val1, val2;

    printf("a, b 입력 : ");
    scanf("%d %d", &a, &b);

    int a1, b1;
    
    a1 = a;
    b1 = b;

    val1 = ++a + b--;

    printf("val1 = %d, a = %d, b = %d\n", val1, a, b);

    a = a1; 
    b = b1;

    val2 = a++ + --b; 

    printf("val2 = %d, a = %d, b = %d", val2, a, b);


    return 0;
}