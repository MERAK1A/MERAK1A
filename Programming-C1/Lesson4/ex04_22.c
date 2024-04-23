#include <stdio.h>
#define PI 3.141592

int main(void)
{
    float one, half;

    printf("기호 상수 PI : %f\n", PI);
    printf("원의 넓이 = π * 반지른 * 반지름\n");

    printf("반지름 입력(cm) : ");
    scanf("%f", &half);

    one = PI * half * half; 

    printf("반지름 %fcm인 원의 넓이는 %fcm^2", half, one);


    return 0;
}