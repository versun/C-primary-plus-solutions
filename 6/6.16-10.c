#include <stdio.h>

int f_result(int a,int b);
int main(void){
    int a,b;
    do
    {
        printf("Enter lower and upper integer limits: ");
        if (scanf("%d %d",&a,&b)!=2){return 0;}
        if (a>=b){printf("Done\n");return 0;}
        f_result(a,b);
    } while (1);
    
    return 0;
}
int f_result(int a,int b){
    int sum=0;
    for (int i = a; i <= b; i++)
    {
        sum+=i*i;
    }
    printf("The sums of the squares from %d to %d is %d\n",a*a,b*b,sum);
    return 0;
}