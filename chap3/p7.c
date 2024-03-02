#include <stdio.h>
int main(void){
    float heigth, res;
    ;
    printf("enter your heigth(cm): ");
    scanf("%f", &heigth);
    res = heigth / 2.54;
    printf("%.2f ich", res);
    return 0;
}