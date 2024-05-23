#include <stdio.h>

int main(void)
{
    char BT[3];

    printf("혈액형 입력:");
    scanf("%s", BT);

    if ((BT[0] == 'A') || (BT[0] =='a') && (BT[1] == '\0'))
    {
        printf("A형\n");
        printf("부드럽고 섬세한 성향");
    }

    else if ((BT[0] == 'B') || (BT[0] == 'b'))
    {
        printf("B형\n");
        printf("주위 변화에 민감한 성향");
    }

    else if ((BT[0] == 'A' ) && (BT[1] == 'B') || (BT[0] == 'a') && (BT[1] == 'b'))
    {
        printf("AB형\n");
        printf("예술적인 감각을 가진 성향");
    }

    else if ((BT[0] == 'O') || (BT[0] == 'o'))
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