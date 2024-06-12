// 완전 수(perfect number)는 자신을 제외한 모든 약수의 합이 자기 자신과 같은 수를 말합니다.
// 예를 들어, 6은 1, 2, 3을 약수로 가지며, 1 + 2 + 3 = 6인 완전 수입니다. 
// 범위의 최대 값인 수를 입력을 받아 1부터 최대 값 사이의 완전 수를 찾는 프로그램을 작성하세요.
// (주어진 숫자가 완전 수인지 확인하는 함수, 범위 안의 모든 완전 수를 찾는 2개의 함수를 정의하시오)
#include <stdio.h>



// 주어진 숫자가 완전 수인지 확인하는 함수
int Perfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

// 주어진 범위 안의 모든 완전 수를 찾는 함수
void find(int max) {
    for (int i = 1; i <= max; i++) {
        if (Perfect(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int max;
    printf("최대 값 입력 : ");
    scanf("%d", &max);

    printf("1 ~ %d 사이의 완전수 :\n", max);
    find(max);

    return 0;
}


