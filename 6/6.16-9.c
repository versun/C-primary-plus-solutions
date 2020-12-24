#include <stdio.h>
float f_result(float a,float b);
int main(void){
    float a,b;
    do{
        printf("Input two float number(q to quit):");
        if(scanf("%f %f",&a,&b)!=2)return 1;
        printf("(%.2f-%.2f) / (%.2f*%.2f) = %.2f\n",a,b,a,b,f_result(a,b));
    }while(1);   
    return 0;
}

float f_result(float a,float b){
    return (a-b)/(a*b);
}