#include<stdio.h>

int main(void)
{
    
    int i = 1;
    
    // if (i <= 3) {
    //     printf("True");
    // } else {
    //     printf("False");
    // }
    
    do{
        printf("%d번째 반복합니다. \n", i);
        i++;
    }while (i <= 3);

    printf("반복이 종료되었습니다. \n");
    

    
    return 0;
}
