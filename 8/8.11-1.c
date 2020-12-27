#include <stdio.h>

int main(void){
    int count=0;
    while (getchar()!=EOF)
    {
        count+=1;
    }
    printf("%d",count);
    
    return 0;
}