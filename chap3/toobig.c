#include <stdio.h>
int main(void){
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d %d %d\n", i, i+2, i+3);
    printf("%u %u %u\n", j, j+1, j+2);
    return 0;
}