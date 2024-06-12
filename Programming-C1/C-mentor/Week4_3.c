#include <stdio.h>

// 피보나치 수열의 n번째 항을 계산하는 함수
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    int a = 0; // 첫 번째 항
    int b = 1; // 두 번째 항
    int c;     // n번째 항을 저장할 변수

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int main() {
    int n;
    printf("n의 값을 입력하세요: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("위치 %d의 피보나치 수는 %d입니다.\n", n, result);

    return 0;
}

