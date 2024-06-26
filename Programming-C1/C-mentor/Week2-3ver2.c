#include <stdio.h>

// 사용자로부터 나이를 입력 받아 요금을 계산하는 프로그램을 작성하시오.
// 다음과 같은 요금 규정을 적용 :
// 10세 미만 : 무료
// 10세 이상 ~ 18세 이하 : 50% 할인
// 65세 이상 : 30% 할인
// 그 외 나이 : 기본 요금
// 기본 요금은 10000원 설정하고, 할인을 적용한 최종 요금을 출력하세요.

int main(void)
{
    int age, charge;
    const char *benefit = "기본 요금"; 
    // const는 문자열 상수를 변경하지 못하게 한다.
    // 다른 문자열을 가르키게 할수는 있다.

    charge = 10000;

    printf("나이에 따른 요금 계산 프로그램\n");
    printf("나이를 입력 : ");
    scanf("%d", &age);

    printf("나이 : %d\n", age);

    if (age < 10)
    {
        benefit = "무료";
        charge = 0;
    }
    else if (age >= 10 && age <= 18)
    {
        benefit = "50% 할인";
        charge = charge / 2;
    }
    else if (age >= 65)
    {
        benefit = "30% 할인";
        charge = charge * 0.7;
    }

    printf("나이 혜택 : %s\n", benefit);
    printf("요금 : %d\n", charge);


    return 0;
}
