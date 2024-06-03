#include <stdio.h>

void Start();

int main(void)
{
    printf("start() 함수 3회 호출 결과\n");

    Start();
    Start();
    Start();


    return 0;
}

void Start()
{
    static int s_cnt = 0; //이미 초기화된 정적 변수는 다시 초기화 값을 선언 불가
    int a_cnt = 0;

    printf("정적 변수 = %d\t 동적 변수 = %d\n", s_cnt, a_cnt);
    s_cnt++;
    a_cnt++;
}