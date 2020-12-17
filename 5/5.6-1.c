#include <stdio.h>
#define MIN_PER_HOUR 60

int main(void){
    int minutes;
    do{
    printf("Input Minutes(<=0 to quit):");
    scanf("%d",&minutes);
    if(minutes<=0){return 0;}
    float hour =  minutes/MIN_PER_HOUR + (minutes%MIN_PER_HOUR)/60.0;
    printf("Covert to hours: %.2f hours or %d hours and %d minutes \n",hour,minutes/MIN_PER_HOUR,minutes%MIN_PER_HOUR);
    }while(1);
    return 0;
}