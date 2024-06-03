#include <stdio.h>
// 사용자로부터 세 개의 변의 길이를 입력 받아, 이를 이용하여 삼각형이 가능한지 판별하는 프로그램을 작성하세요. 또한 가능한 경우 삼각형의 종류를 판별하여 출력하세요. 가능한 삼각형의 종류는 다음과 같습니다:

// - 정삼각형 (세 변의 길이가 모두 같은 경우)
// - 이등변삼각형 (두 개의 변의 길이가 같은 경우)
// - 일반 삼각형 (세 변의 길이가 모두 다른 경우)
// - 삼각형이 아님 (세 변의 길이가 삼각형을 형성하지 못하는 경우)

int main() {
    float a, b, c;

    // 사용자로부터 세 변의 길이를 입력
    printf("세 변의 길이를 입력하세요 (공백으로 구분): ");
    scanf("%f %f %f", &a, &b, &c);

    // 삼각형의 가능성을 확인
    if (a <= 0 || b <= 0 || c <= 0) 
    {
        printf("삼각형이 아님: 모든 변의 길이는 양수여야 합니다.\n");
    } 

    else if (a + b > c && a + c > b && b + c > a) 
    {
        // 삼각형의 종류를 판별
        if (a == b && b == c) {
            printf("정삼각형\n");
        } 

        else if (a == b || b == c || a == c) 
        {
            printf("이등변삼각형\n");
        } 

        else 
        {
            printf("일반 삼각형\n");   
        }
    } 
    else 
    {
        printf("삼각형이 아님: 세 변의 길이 조건을 만족하지 않습니다.\n");
    }


    return 0;
}
