#include <stdio.h>

int main(void){
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c",'$');
        }
        printf("\n");
        
    }
    
    
    return 0;
}