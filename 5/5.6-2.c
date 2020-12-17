#include <stdio.h>
#define RANGE 10
int main(void){
    int num;
    printf("Input a number:");
    scanf("%d",&num);
    int range=num+RANGE;

    do{
        printf("%d\n",num++);
    }while(num<=range);
    return 0;
}