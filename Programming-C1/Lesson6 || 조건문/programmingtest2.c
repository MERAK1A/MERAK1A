#include <stdio.h>


int main(void)
{
    int score;
    char credit[3];

    printf("입력 받은 점수에 따라 학점을 출력하는 프로그램\n");
    printf("점수 입력 :");
    scanf("%d", &score);

    printf("입력한 점수 :%d\n", score);

    if (score > 100 || score < 0)
    {
        printf("error");
    }

    else
    {   
        switch (score / 10)// case 블록에 break; 문이 없으면 fall-through 현상이 발생됨
        {
        case 9: 
        case 10:
            if (score >= 95)
            {
                const char credit[3] = "A+";
                printf("학점 : %s",credit);
            }

            else
            {   
                const char credit[3] = "A0";
                printf("학점 : %s", credit);
            }
            break;
        
        case 8:
            if (score >= 85)
            {
                const char credit[3] = "B+";
                printf("학점 : %s", credit);
            }

            else
            {
                const char credit[3] = "B0";
                printf("학점 : %s", credit);

            }
            break;

        case 7:
            if (score >= 75)
            {
                const char credit[3] = "C+";
                printf("학점 : %s", credit);
            }
            else
            {
                const char credit[3] = "C0";
                printf("학점 : %s", credit);
            }
            break;
        
        case 6:
            if (score >= 65)
            {
                const char credit[3] = "D+";
                printf("학점 : %s", credit);
            }

            else
            {
                const char credit[3] = "D0";
                printf("학점 : %s", credit);
            }
            break;
        
        default:
        {
            const char credit[3] = "F";
            printf("학점 : %s", credit);
            break;
        }
        }
    }
    
    
    return 0;
}