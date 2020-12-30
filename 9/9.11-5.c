#include <stdio.h>
int larger_of(double *,double *);
int main(void){
    double a,b;
    printf("Enter two numbers: ");
    while (scanf("%lf %lf",&a,&b)!=2)
    {       
        continue;
    }
    larger_of(&a,&b);
    printf("%.2lf,%.2lf\n",a,b);
    return 0;
}
int larger_of(double * a,double * b){
    *a = *a>*b ? *a :*b;
    *b = *a;
    return 0;
}