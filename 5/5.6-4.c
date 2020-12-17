#include <stdio.h>
#define FEET_TO_CM 30.48
#define INCH_TO_CM 2.54

int main(void){
    int feet;
    float cm,inch;
    do{
        printf("Enter a height in centimeters (<=0 to quit):");
        scanf("%f",&cm);
        if(cm<=0){return 0;}
        feet = cm/FEET_TO_CM;
        inch = (cm-feet*FEET_TO_CM)/INCH_TO_CM;
        printf("%.1f cm = %d feet, %.1f inches\n",cm,feet,inch);
    }while(1);
    return 0;
}