#include <stdio.h>
int main(void){
    float weigth;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("plz enter your weight in pounds: ");
    scanf("%f", &weigth);
    value = 1700.0 * weigth * 14.5833;
    printf("your weigth in platinum is worth $%.2f. \n", value);
    printf("You are easily worth that! If platinum prices drop, \n");
    printf("eat more to maintain your value.\n");
    getchar();
    getchar();
    return 0;
}