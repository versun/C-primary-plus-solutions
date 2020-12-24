#include <stdio.h>

int main(void){
    double sum=0.0;
    int length;

    do{
    printf("Input a number to limit length:");
    if(scanf("%d",&length)!=1)return 0;
    if(length<=0)return 0;

    for (int i = 1; i <= length; i++)
    {
        sum+=1.0/i;
    }
    printf("1st sum = %lf\n",sum);
    sum=0.0;

    for (int i = 1; i <= length; i++)
    {
        if (i%2==0)
        {   
            sum-=1.0/i;
        }else{
        sum+=1.0/i;
        }
    }
    printf("2nd sum = %lf\n",sum);
    sum=0.0;
    
    for (int i = 1; i <= length; i++)
    {
        if(i%2!=0)sum+=(2*1.0/i);
    }
    printf("all sum = %lf\n",sum);
    sum=0.0;
    }while(1);
    
    return 0;
}