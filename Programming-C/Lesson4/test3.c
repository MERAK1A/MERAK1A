#include <stdio.h>

int main()
{
    //5 과목의 점수를 입력하고 입력 값을 더하고 그 값의 평균 값 출력
    int num1;
    double num2 = 0;
    int i;
    int subject_cnt;

    printf("과목의 갯수를 입력 :");
    scanf("%d", &subject_cnt);
    
    for (i = 1; i <= subject_cnt; i++){// 1 부터 5까지 반복,  총 5번
        printf("과목%d\n", i); //과목 번호 출력 과목1~5
        scanf("%d", &num1); // 과목 점수 입력 -> num1
        num2 += num1;  // 복합 대입 연산자를 사용해 num1 값을 num2 에 대입
    }

    printf("%d 과목 점수 합 : %d\n", subject_cnt, (int)num2);
    printf("%d 평균 점수 : %f\n", subject_cnt, num2 / subject_cnt);


    return 0;
}