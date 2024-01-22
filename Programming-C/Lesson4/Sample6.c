#include <stdio.h>

int main(){ //메인 함수 선언

   int sum = 0; //sum int 변수 선언
   int num = 0; //num int 변수 선언

    printf("first\n");
    scanf("%d", &num); //scanf를 사용하여 num 변수에 입렵 값 저장
    sum += num; //복합 대입 연산자를 사용하여 변수 num 값을 변수 sum에 대입

    printf("second\n");
    scanf("%d", &num);
    sum += num;

    printf("%d", sum); //츨력

    return 0;
}
