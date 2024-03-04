#include <stdio.h>
int main(void){
    char first_name[20], second_name[20];
    printf("Enter your first name and second name: \n");
    scanf("%s %s", first_name, second_name);
    printf("%s.%s",second_name, first_name);
}