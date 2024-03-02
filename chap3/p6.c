#include <stdio.h>
int main(void){
    float kqt, h2o_num;
    printf("plz enter water kqt: ");
    scanf("%f", &kqt);
    printf("kqt is %f", kqt);
    h2o_num = kqt * 950 / 3.0e-23;
    printf("water cell is %e", h2o_num);
    return 0;
}