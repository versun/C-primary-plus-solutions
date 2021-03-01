#include <stdio.h>
#include <strings.h>

char* my_strchr(char *source, char target);

int main(void){
    char source[]="asdfghjkl";
    char target[] = "zxvafsdjlkasdf";
    char *p_c = NULL;
    for(int i=0; target[i]!='\0'; i++){
        p_c = my_strchr(source, target[i]);
        if(p_c!=NULL )
            printf("%c\n",*p_c);
    }
    return 0;
}
char* my_strchr(char *source, char target){
   char *p_c=NULL;
   while(*source != '\0'){
       if(*source == target){
           p_c = source;
           break;
       }else{
           source++;
       }
   } 
   return p_c;
}
