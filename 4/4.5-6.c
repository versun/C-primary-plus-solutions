#include <stdio.h>
#include <string.h>
int main(void){
    char name[40],surname[40];
    unsigned int len_name,len_surname;
    printf("Input your name:");
    scanf("%s",name);
    printf("Input your surname:");
    scanf("%s",surname);
    len_name = strlen(name);
    len_surname = strlen(surname);
    printf("%s %s\n",name,surname);
    printf("%*d %*d\n",len_name,len_name,len_surname,len_surname);
    printf("%-*d %-*d\n",len_name,len_name,len_surname,len_surname);
    
    return 0;
}