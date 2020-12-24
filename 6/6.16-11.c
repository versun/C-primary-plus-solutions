#include <stdio.h>

int main(void){
    int nums[8];
    printf("Input 8 inteter data:");
    for (int i = 0; i < 8; i++)
    {
        if(scanf("%d",&nums[i])!=1)return 0;
    }
    for (int i = 7; i >=0; i--)
    {
        printf("%d ",nums[i]);
    }    
    return 0;
}