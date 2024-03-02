#include <stdio.h>
int main(void){
    float age;
    float sec;
    printf("set your age: ");
    scanf("%f", &age);
    sec = age * 3.156e10;
    printf("you lived %f", sec);
    return 0;
}