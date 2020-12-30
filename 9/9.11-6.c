#include <stdio.h>
int sort(double *,double *,double *);
double max_number(double,double);
double min_number(double,double);

int main(void){
    double a,b,c;
    printf("Enter three numbers: ");
    while (scanf("%lf %lf %lf",&a,&b,&c)!=3)
    {       
        continue;
    }
    sort(&a,&b,&c);
    printf("%.2lf < %.2lf < %.2lf\n",a,b,c);
    return 0;
}
int sort(double * p1,double * p2,double * p3){
    double min,mid,max;
    double sum=*p1+*p2+*p3;
    
    max = max_number(*p1,*p2);
    max = max_number(max,*p3);
    min = min_number(*p1,*p2);
    min = min_number(min,*p3);
    mid = sum-max-min;
    *p1 = min;
    *p2 = mid;
    *p3 = max;
    return 0;
}
double max_number(double a,double b){
    return a>b?a:b;
}
double min_number(double a,double b){
    return a>b?b:a;
}