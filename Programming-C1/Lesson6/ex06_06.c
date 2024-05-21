#include <stdio.h>

int main(void)
{
    char BT;

    printf("혈액형 입력:");
    scanf("%c", BT);

    if (BT == 'A' && BT =='a')
    {
        printf("A형\n");
        printf("부드럽고 섬세한 성향");
    }
    if (BT == 'B' && BT == 'b')
    {
        printf("B형\n");
        printf("주위 변화에 민감한 성향");
    }
    if (BT == 'AB' && BT == 'ab')
    {
        printf("AB형\n");
        printf("예술적인 감각을 가진 성향");
    }
    if (BT == 'O' && BT == 'o')
    {
        printf("O형\n");
        printf("활발하고 쾌활한 성향");
    }
    else
    {
        printf("혈액형이 아님");
    }
    

    return 0;
}