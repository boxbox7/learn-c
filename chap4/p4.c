#include <stdio.h>
int main(void){
    float heigth;
    char name[20];
    ;
    printf("Enter your heigth: \n");
    scanf("%f %s", &heigth, name);
    printf("%s, you are %.3f feet tall", name, heigth);
    return 0;
}