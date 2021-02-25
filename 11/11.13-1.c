#include <stdio.h>
void get_char(char c[],int n);
int main(void){
    char c[10];    
    get_char(c,10);
    puts(c);
    return 0;
}
void get_char(char c[],int n){
    printf("Input %i chars:\n",n);
    for(int i=0; i<n; i++){
        c[i] = getchar();
    }
}
