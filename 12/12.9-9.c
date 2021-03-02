#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_words(){
    int n;
     
    printf("How many words do you wish to enter?");
    scanf("%i",&n);
    char** ptc = (char**) malloc(n*sizeof(char*));
    char tmp[20];
    
    printf("Enter %i words now: \n",n);
    for(int i=0; i<n; i++){
        for(int j=0; j<20; j++){
            char c;
            c=getchar();
            if(c!=' ' && c!='\t' && c!='\n'){
                tmp[j] = c;
            }else if(j==0){
                j=-1;
                continue;
            }else{
                tmp[j] = '\0';
                ptc[i] = (char*) malloc(j*sizeof(char));
                strncat(ptc[i],tmp,j);
                break;
            }
        }
    }
    puts("Here are your words:"); 
    for(int i=0; i<n; i++){
        printf("%s\n",ptc[i]);
    }
    return 0;
}
int main(void){
    get_words();     
    return 0;
}
