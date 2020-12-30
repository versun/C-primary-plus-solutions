#include <stdio.h>

double min(double,double);
int main(void){
    double a,b;
    printf("Enter two numbers: ");

    while ((scanf("%lf %lf",&a,&b))==2)
    {
        printf("miniest number is:%.2lf\n",min(a,b));
        printf("Enter two numbers: ");

    }
    printf("Bye!");
    return 0;
}

double min(double a,double b){
    return a>b ? b : a;
}