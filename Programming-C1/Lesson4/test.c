#include <stdio.h>

int main(void)//short -32,768 ~ 32,767
{
    //오버플로 발생 
    short num1 = 32769;
    printf("num1 = %d\n", num1);
    //언더플로 발생 
    short num2 = -32769;
    printf("num2 = %d\n", num2);
    //아스키코드 값
    char alpha = 'a';
    printf("ASCII = %d\n", alpha);

    //연산 결과 값
    char ch;
    ch = 'j' + 3;
    printf("ch = %d", ch);


    return 0;
}