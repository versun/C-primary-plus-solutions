#include <stdio.h>
#include <string.h>
int main(void){
    char name[40];
    printf("Input name:");
    scanf("%s",name);
    printf("\"Your name is: %s\"\n",name);
    printf("\"Your name is: %20s\"\n",name);
    printf("\"Your name is: %-20s\"\n",name);
    int width = strlen(name);
    printf("\"Your name is: %*s\"\n",width+3,name);

    return 0;
}