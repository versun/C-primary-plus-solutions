#include <stdio.h>
#include <string.h>
void get_word(char w[],int n){
    printf("Input a word(%i chars):",n);
    char c;
    int index=0;
    while((c=getchar()) && index<n){
        if(c!='\t' && c!=' ' && c!='\n' ){
            w[index++] = c;
        }else if(index == 0){
            continue;
        }else{
            break;
        }
    }
    w[index]='\0';
}
int main(void){
    int n=10;
    char w[n];
    get_word(w,n);
    puts(w);
    return 0;
}
