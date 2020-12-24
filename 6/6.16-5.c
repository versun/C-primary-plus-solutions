#include <stdio.h>

int main(void){
    char c;
    int num=5;
    printf("Input a char(A..Z):");
    scanf("%c",&c);

    for (int i=0; i < num; i++)
    {
        for (int j = num; j>i; j--)
        {
            printf(" ");            
        }
        for (int k = 0; k<=i; k++)
        {
            printf("%c",c+k);
        }
        for (int k = 0; k<i; k++)
        {
            printf("%c",c+i-k-1);
        }
        printf("\n");
        
    }
    
    return 0;
}