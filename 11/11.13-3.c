#include <stdio.h>
#include <string.h>
void get_word(char w[]){
    printf("Input a word:");
    char c;
    int index=0;
    while((c=getchar())){ 
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
    char w[100];
    get_word(w);
    puts(w);
    return 0;
}
