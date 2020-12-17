#include <stdio.h>

double cubic(double n);
int main(void){
    double num;
    printf("Input a number:");
    scanf("%lf",&num);
    printf("The %lf's cubic is:%.2lf\n",num,cubic(num));
    return 0;
}

double cubic(double n){
    return n*n;
}