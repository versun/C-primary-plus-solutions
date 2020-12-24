#include <stdio.h>

int main(void){
    float a,b;
    do{
        printf("Input two float number(q to quit):");
        if(scanf("%f %f",&a,&b)!=2)return 1;
        printf("(%.2f-%.2f) / (%.2f*%.2f) = %.2f\n",a,b,a,b,(a-b)/(a*b));
    }while(1);   
    return 0;
}