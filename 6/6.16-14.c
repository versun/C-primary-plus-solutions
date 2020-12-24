#include <stdio.h>

int main(void){
    double a[8],b[8];
    printf("Input 8 numbers:");
    for (int i = 0; i < 8; i++)
    {
        if (scanf("%lf",&a[i])!=1){return 0;}
    }
    b[0]=a[0];
    for (int i = 1; i < 8; i++)
    {
        b[i]=b[i-1]+a[i];
    }
    
    for (int i = 0; i < 8; i++)
    {
        printf("%8.2f ",a[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%8.2f ",b[i]);
    }
    printf("\n");
    
    return 0;
}