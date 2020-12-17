#include <stdio.h>

int Temperatures(double fahrenheit);
int main(void){
    double fahrenheit;
    
    do{
        printf("Input a fahrenheit to start (q to quit):");
        if(scanf("%lf",&fahrenheit) != 1){
            printf("Done!");
            return 0;
            }
        Temperatures(fahrenheit);
    }while(1);
    return 0;
}

int Temperatures(double fahrenheit){
    const double F_TO_C = 32.0;
    const double C_TO_K = 273.16;
    double celsius, kelvin;
    celsius = 5.0/9.0*(fahrenheit - F_TO_C);
    kelvin = fahrenheit + C_TO_K;
    printf("%.2f. fahrenheit = %.2f celsius = %.2f kelvin\n",fahrenheit,celsius,kelvin);
    return 0;
}
