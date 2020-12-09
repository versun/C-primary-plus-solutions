#include <stdio.h>
#define MASS_PER_MOLE 3.0E-23
#define MASS_PER_QUART 950

int main(void){
    float quart,quantify;
    printf("Input quart: ");
    scanf("%f",&quart);
    quantify = quart * MASS_PER_QUART / MASS_PER_MOLE;
    printf("There are %e molecule.",quantify);
    return 0;
}