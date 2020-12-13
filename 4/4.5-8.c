#include <stdio.h>
#define GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609

int main(void){
    float range,oil;
    printf("Input the range you traveled(mile):");
    scanf("%f",&range);
    printf("Input the oil you spend(gallon):");
    scanf("%f",&oil);

    printf("In UAS, your oil wear is %.1f M/G\n",range/oil);
    printf("In Europe, your oil wear is %.1f L/100KM\n",(oil*MILE_TO_KM)/(range*GALLON_TO_LITRE));

    return 0;
}