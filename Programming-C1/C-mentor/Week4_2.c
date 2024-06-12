#include <stdio.h>

// 하노이의 탑 문제를 해결하는 재귀 함수
// void hanoi(int n, char from, char to, char spare) 
// {
//     if (n == 1)
//     {
//         printf("원판 1을 %c에서 %c로 옮깁니다\n", from, to);
//         return;
//     }
//     //1단계: n-1개의 원판을 from에서 spare로 옮김 (to를 보조로 사용)
//     hanoi(n - 1, from, spare, to);
//     // 2단계: 가장 큰 원판을 from에서 to로 옮김
//     printf("원판 %d을 %c에서 %c로 옮깁니다\n", n, from, to);
//     // 3단계: n-1개의 원판을 spare에서 to로 옮김 (from을 보조로 사용)
//     hanoi(n - 1, spare, to, from);
// }

for (int n = 0; n < 10; n++)
{

}


int main() 
{
    int n;
    printf("원판의 개수를 입력하세요: ");
    scanf("%d", &n);

    // 'A'는 출발 기둥, 'C'는 도착 기둥, 'B'는 보조 기둥으로 설정
    printf("하노이의 탑 이동 순서는 다음과 같습니다:\n");
    hanoi(n, 'A', 'C', 'B');

    return 0;
}
