#include<stdio.h>

int main(void)
{
    char str[] = "Hello";
    int i = 0;

    printf("Hello\n");
    
    // for(i = 0; str[i] != '\0'; i++){
    //     printf("%c*", str[i]);
    // }
    while (str[i]){
        printf("%c*", str[i]);
        i++;
    }
    
    printf("\n");


    return 0;
}