#include <stdio.h>
#include <string.h>
void get_char(char c[],int n);
int main(void){
    char c[10];    
    get_char(c,10);
    puts(c);
    return 0;
}
void get_char(char *c,int n){
    printf("Input %i chars:\n",n);
    fgets(c,n,stdin);
    for(int i=0; i<n; i++){
        if(*c == ' ' || *c == '\t')
            *c = '\0';
        c++;
    }
}
