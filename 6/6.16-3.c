#include <stdio.h>

int main(void){
    int n=6;
    char c='F';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c",c-j);
        }
        printf("\n");
        
    }
    
    
    return 0;
}
