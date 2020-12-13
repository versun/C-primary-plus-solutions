#include <stdio.h>

int main(void){
    float fnumber;
    printf("Input a float number:");
    scanf("%f",&fnumber);
    printf("The input is %.1f or %.1e;\n",fnumber,fnumber);
    printf("The input is %.3f or %.3e;\n",fnumber,fnumber);
    return 0;
}