#include<stdio.h>

int main(){

    double dnum; //변수 선언
    int inum;

    dnum = 150.2;

    printf("%f\n",dnum);

    inum = dnum; //크기가 작은 형에 대입
    
    printf("%f\n", inum);


    return 0;
}