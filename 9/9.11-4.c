#include <stdio.h>

double harmonic_mean(double,double);
int main(void){
    double a,b;
    printf("Enter two numbers: ");
    while (scanf("%lf %lf",&a,&b)!=2)
    {       
        continue;
    }
    printf("The harmonic mean is: %.2lf",harmonic_mean(a,b));
    return 0;
}
double harmonic_mean(double a,double b)
{
    return 1 / ((1/a+1/b)/2);
}