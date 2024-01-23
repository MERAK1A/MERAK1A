#include<stdio.h>

int main(void)
{
    int num1;

    printf("성적을 입력하세요.\n");
    scanf("%d", &num1);
    printf("성적은 %d입니다.\n", num1);
    
    switch (num1){
        case 1:
            printf("노력이 필요합니다.");
            break;
        
        case 2:
            printf("조금 더 노력이 필요합니다.");
            break;

        case 3:
            printf("잘 했습니다.");
            break;
        
        case 4:
            printf("매우 잘 했습니다.");
            break;
        
        case 5:
            printf("매우 우수합니다.");
            break;
        default:
            printf("잘못 입력함");
    }
    

    return 0;
}