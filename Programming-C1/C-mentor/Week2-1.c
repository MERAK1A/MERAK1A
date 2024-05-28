#include <stdio.h>
#define Pi 3.14
// 사용자로부터 원의 반지름을 입력 받아,
// 원의 면적을 계산해 출력하시오. π(파이)는 3.14로 가정함. 
// (π(파이)는 상수로 선언, 원의 면적 출력은 소수점 둘째 자리까지 출력)

int main(void)  
{   
    float radius, area;
    
    printf("원의 반지름을 입력 받아 원의 면적을 계산하는 프로그램\n");
    printf("원의 반지름 입력 : ");
    scanf("%f", &radius);

    radius *= radius;
    area = radius * Pi;

    printf("원의 면적은 %.2fm^2", area);


    return 0;
}