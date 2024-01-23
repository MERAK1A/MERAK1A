#include<stdio.h>

int main(){

    int a = 11;
    int b = 2;

    printf("short int %lubyte.\n",sizeof(short int)); //size of 연산자를 사용해 형의 크기를 검사.
    printf("int %lubyte.\n",sizeof(int));
    printf("long int %lubyte.\n",sizeof(long int));
    printf("double %lubyte.\n", sizeof(double));
    printf("a + b %lubyte.\n", sizeof(a+b)); //size of 연산자를 사용해 식의 크기를 검사.
    



    return 0;

}