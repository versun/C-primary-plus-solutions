#include <stdio.h>
#define DAYS_PER_WEEK 7

int main(void){
    int days;
    do{
    printf("Input the number of days:");
    scanf("%d",&days);
    if(days<=0){return 0;}
    printf("%d days are %d weeks, %d days\n",days,days/DAYS_PER_WEEK,days%DAYS_PER_WEEK);
    }while(1);
    return 0;
}