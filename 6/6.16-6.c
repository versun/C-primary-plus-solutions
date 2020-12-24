#include <stdio.h>

int main(void){
    int start,end;
    printf("Input a number for start:");
    scanf("%d",&start);
    printf("Input a number for start:");
    scanf("%d",&end);

    for (int i = start; i < end; i++)
    {
        printf("%d %10d %10d\n",i,i*i,i*i*i);
        
    }
    
    return 0;
}