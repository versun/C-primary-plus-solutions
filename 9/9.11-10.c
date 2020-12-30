/* binary.c -- prints integer in binary form */
#include <stdio.h>
void to_binary(unsigned long n);
void to_base_n(unsigned long a,int n);
int main(void)
{
    unsigned long number;
    int count,b;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Enter number base (2-10): ");
        while ((count = scanf("%d", &b))== 1&& (b < 2 || b > 10)){
            printf("base should be in the range 2-10: ");
        }
        to_base_n(number,b);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");
    
    return 0;
}

void to_binary(unsigned long n)   /* recursive function */
{
    int r;
    
    r = n % 2;
    if (n >= 2)
        to_binary(n / 2);
     putchar(r == 0 ? '0' : '1');
    
    return;
}
void to_base_n(unsigned long a,int n){
    int r;
    
    r = a % n;
    if (a >= n)
        to_base_n(a/n,n);
     putchar('0'+r);
    return;
}
