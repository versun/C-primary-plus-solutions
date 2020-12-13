#include <stdio.h>

int main(void){
    float heigh;
    char name[40];
    printf("Input your name:");
    scanf("%s",name);
    printf("Input your heigh(cm):");
    scanf("%f",&heigh);
    printf("%s, you are %.3f m tall",name,heigh/100);
    return 0;
}