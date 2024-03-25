#include<stdio.h>
#define NUM 5
int main(void){

    int i, j, t;
    int c = 0;
    int test[NUM];

    printf("시험 점수를 입력하세요.\n");

    for (i = 0; i < NUM; i++){
        scanf("%d", &test[i]);
    }

    for (j = 0; j < NUM; j++){
        printf("%d번째 사람의 시험 점수는 %d점입니다.\n", j+1, test[j]);
    }

    for (t = 0; t < NUM; t++){
        if (test[t] >= 70){
            c++;
        }
    }
    
    printf("70점 이상인 학생은 %d명입니다.", c);


    return 0;
}