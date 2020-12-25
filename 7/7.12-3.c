#include <stdio.h>

int main(void){
    int odd_ct=0;
    int even_ct=0;
    float odd_sum=0;
    float even_sum=0;
    int n;

    while ((scanf("%d",&n)==1 && n!=0))
    {
        if (n%2==0)
        {
            even_ct+=1;
            even_sum+=n;
        }else
        {
            odd_ct+=1;
            odd_sum+=n;
        }  
    }

    printf("odd has %d numbers; odd avg is %.2f\n",odd_ct,odd_sum/odd_ct);
    printf("even has %d numbers; even avg is %.2f\n",even_ct,even_sum/even_ct);
    return 0;
}