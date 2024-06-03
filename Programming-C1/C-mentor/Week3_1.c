#include <stdio.h>

// 사용자로부터 세 개의 변의 길이를 입력 받아, 이를 이용하여 삼각형이 가능한지 판별하는 프로그램을 작성하세요. 또한 가능한 경우 삼각형의 종류를 판별하여 출력하세요. 가능한 삼각형의 종류는 다음과 같습니다:

// - 정삼각형 (세 변의 길이가 모두 같은 경우)
// - 이등변삼각형 (두 개의 변의 길이가 같은 경우)
// - 일반 삼각형 (세 변의 길이가 모두 다른 경우)
// - 삼각형이 아님 (세 변의 길이가 삼각형을 형성하지 못하는 경우)

int main(void)
{
    float a, b, c;

    const char *triangletype; 

    printf("세 개의 변의 길이를 입력 받아 삼각형 판별 프로그램\n");
    printf("세 개의 변의 길이 입력 : ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b)
    {
        if (a == c)
        {
            triangletype = "정삼각형";
            printf("%s", triangletype);
        }
    }
    else if (a == b )
    {
        if (a != c)
        {
            triangletype = "이등변 삼각형";
            printf("%s", triangletype);
        }
    else if (a == c)
    {
        if (a != b)
        {
            triangletype = "이등변 삼각형";
            printf("%s", triangletype);
        }
    }
    else if (b == c)
    {
        triangletype = "이등변 삼각형";
        printf("%s", triangletype);
    }
    
    }


    return 0;
}