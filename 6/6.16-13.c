#include <stdio.h>

int main(void){
    int nums[8];
    for (int i = 0; i < 8; i++)
    {
        nums[i]=2;
        for (int j = 0; j < i; j++)
        {
            nums[i]*=2;
        }
    }
    
    int i=0;
    do
    {
        printf("%d\n",nums[i]);
        i++;
    } while (i<8);
    
    return 0;
}