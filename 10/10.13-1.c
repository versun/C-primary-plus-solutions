#include <stdio.h>

int main(void){
    int n=7;
    int arr[n] = {[5] = 12};    
    printf("%d",arr[5]);
    return 0;
}