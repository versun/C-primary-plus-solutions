#include <stdio.h>

int main(void){
    int n=6;
    char c='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++,c++)
        {
            printf("%c",c);
        }
        printf("\n");
        
    }
    return 0;
}