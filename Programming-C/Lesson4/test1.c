#include<stdio.h>

int main()
{
    //0-4
    {
    int num1 , num2;
    num1 = 0, num2 = 4;
    printf("%d\n", num1 - num2);
    }
    //3.14 * 2
    {
    double num1 = 3.14;
    int num2 = 2;
    printf("%f\n", num1 * num2);
    }
    //5/3
    {
        double num1 = 5;
        int num2 = 3;
        printf("%f\n", num1 / num2);
    }
    //30/7의 나머지
    {
        int num1 = 30;
        int num2 = 7;
        printf("%d\n", num1 % num2);
    }
    //(7+32) / 5
    {
        int num1 = 7 + 32;
        double num2 = 5.0;
        printf("%f\n", num1 / num2);
    }


    return 0;
}