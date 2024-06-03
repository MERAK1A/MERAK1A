#include <stdio.h>

// 외부 변수 선언
extern int num1;

// 외부 함수 선언
extern void printNum1(void);

int main(void) {
    // 외부 변수를 사용
    printf("Main: num1 = %d\n", num1);

    // 외부 함수를 호출
    printNum1();

    return 0;
}
