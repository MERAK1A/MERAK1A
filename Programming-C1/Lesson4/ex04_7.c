#include <stdio.h>

int main(void)
{
    float height, weight,swap, BMI;

    printf("BMI = 체중(kg) / 키(cm)^2\n");

    printf("키(cm) 입력 : ");
    scanf("%f", &height);

    printf("체중(kg) 입력 : ");
    scanf("%f", &weight);

    swap = height / 100;
    BMI = weight  / (swap * swap);

    printf("BMI = %f(kg) / (%f(m) * 2) : %8.2f", weight, height, BMI);
    

    return 0;
}