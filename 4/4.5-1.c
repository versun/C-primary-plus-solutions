#include <stdio.h>

int main(void){
    char name[40];
    char surname[40];
    printf("Input name:");
    scanf("%s",name);
    printf("Input surname:");
    scanf("%s",surname);
    printf("Your name is %s , %s\n",name,surname);
    return 0;
}