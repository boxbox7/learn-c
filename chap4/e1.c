#include <stdio.h>
int main(void){
    char name[40];
    float cash;
    printf("Enter your name:\n");
    scanf("%s", name);
    printf("Enter your cash(f):\n");
    scanf("%f", &cash);
    printf("The %s family just may be $%.2f dollars richer!\n", name, cash);
    return 0;

}