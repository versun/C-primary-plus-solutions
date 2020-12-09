#include <stdio.h>
#define INCH_TO_CM 2.54

int main(void){
    float inch,cm;
    printf("Input your heigh(inch): ");
    scanf("%f",&inch);
    cm = inch * INCH_TO_CM;
    printf("Your are %f cm",cm);    
    return 0;
}