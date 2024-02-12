#include<stdio.h>
#define NUM 5

int main(void)
{   
    int test[NUM];
    int i, j, s, t;
    int tmp;

    printf("시험 점수를 입력하세요.\n");
    for (i = 0; i < NUM; i++){
        scanf("%d", &test[i]);
    }

    for(j = 0; j < NUM; j++){
        printf("%d번째 사람의 점수는 %d점입니다.\n", j+1, test[j]);
    }

    for(s = 0; s < NUM-1; s++){
        for(t = s+1; t<NUM; t++){
            if(test[t] > test[s]){
                tmp = test[t];
                test[t] = test[s];
                test[s] = tmp;
            }
        }   
    }
    printf("최고 점수는 %d점입니다.", test[0]);
    

    return 0;
}