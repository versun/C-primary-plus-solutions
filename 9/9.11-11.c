#include <stdio.h>

int Fibonacci(int);
int main(void){
    int n;
    printf("How many Fibonacci number do you want:");
    scanf("%d",&n);
    Fibonacci(n);
    return 0;
}
int Fibonacci(int n){
    int f_n=0;
    int c_n=1;
    int t;
    for (int i = 0; i <= n; i++)
    {
        printf("%d,",c_n);
        t=c_n;
        c_n=f_n+c_n;
        f_n=t;
    }
    return 0;
}
