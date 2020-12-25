#include <stdio.h>

char is_prime(int n);
int main(void){
    int n;
    printf("Enter a number(>0):");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("Bye!");
    }
    for (int i = 1; i <= n; i++)
    {
        if (is_prime(i)=='Y')
        {
            printf("%d,",i);
        }
        
    }
    return 0;
}

char is_prime(int n){
    int k=0;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            k+=1;
        }
        if (k>1)
        {
            return 'N';
        }
    }
    return 'Y';
    
}