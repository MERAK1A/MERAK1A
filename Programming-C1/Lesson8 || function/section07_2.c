#include<stdio.h>
#include<stdlib.h>

void score_fun();
char grade_fun(int jumsu);
char err_fun();
void end_fun(char YN);

int main(void) {
   char YN;

   do {
        printf("[main()함수 영역]");
        printf("프로그램을 시작하시겠습니까 (Y/N)\n");
        printf(":");
        scanf(" %c", &YN);

        switch (YN)
        {
        case 'Y':
        case 'y':
        {
            score_fun();
            break;
        }
        case 'N':
        case 'n':
        {    
            end_fun(YN);
            break;
        }
        default:
            err_fun();
            break;
      }
   } while (1);
}

void score_fun() 
{
   int junggan;
   int gimal;
   int total;

   printf("중간고사 점수를 입력해주세요(최대50점):");
   scanf(" %d", &junggan);

   if (junggan > 50) 
   {
      err_fun();
   }
   printf("기말고사 점수를 입력해주새요(최대50점):");
   scanf(" %d", &gimal);

   if (gimal > 50) 
   {
      err_fun();
   }
   total = junggan + gimal;
   
   grade_fun(total);
}

char grade_fun(int jumsu) 
{

   if (jumsu >= 95 && jumsu <= 100) 
   {
      printf("score_fun 에서 전달 받은 값: %d\n", jumsu);
      return printf("등급: A+학점 \n");
   }
   else if (jumsu >= 90 && jumsu <= 94) 
   {
      printf("score_fun 에서 전달 받은 값: %d\n", jumsu);
      return printf("등급: A0학점 \n");
   }
   else if (jumsu >= 85 && jumsu <= 89) 
   {
      printf("score_fun 에서 전달 받은 값: %d\n", jumsu);
      return printf("등급: B+학점 \n");
   }
   else if (jumsu >= 80 && jumsu <= 84) 
   {
      printf("score_fun 에서 전달 받은 값: %d\n", jumsu);
      return printf("등급: B0학점 \n");
   }
   else if (jumsu >= 75 && jumsu <= 79) 
   {
      printf("score_fun 에서 전달 받은 값: %d\n", jumsu);
      return printf("등급: C+학점 \n");
   }
   else if (jumsu >= 70 && jumsu <= 74) 
   {
      printf("score_fun 에서 전달 받은 값: %d\n", jumsu);
      return printf("등급: C0학점 \n");
   }
   else if (jumsu >= 65 && jumsu <= 69) 
   {
      printf("score_fun 에서 전달 받은 값: %d\n", jumsu);
      return printf("등급: D+학점 \n");
   }
   else if (jumsu >= 60 && jumsu <= 64) 
   {
      printf("score_fun 에서 전달 받은 값: %d\n", jumsu);
      return printf("등급: D0학점 \n");
   }
   else 
   {
      printf("score_fun 에서 전달 받은 값: %d\n", jumsu);
      return printf("등급: F학점 \n");
   }
}

char err_fun() 
{
   printf("조건에 맞지 않는 문자, 수를 입력했습니다.\n");
   return printf("프로그램을 재시작 합니다.\n\n"), main();
}

void end_fun(char YN) 
{
   printf("main()함수에서 프로그램 종료를 요청했습니다.\n");
   printf("문자'%c'에서 전달받아 프로그램을 종료합니다.", YN);
   exit(0);
}

