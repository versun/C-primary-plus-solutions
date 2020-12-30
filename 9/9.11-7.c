#include <stdio.h>
#include <ctype.h>
int char_locat(char c);
int main(void){
    char c;
    printf("Input a char(EOF to quite):\n");
    while ((c=getchar())!=EOF)
    {
        if(c=='\n')continue;
        char_locat(c);        
        printf("Input a char(EOF to quite):\n");
    }
    printf("Done!");
    return 0;
}
int char_locat(char c){
    if (isalpha(c))
    {
        printf("%c is a aplha,the locat is %d\n",c,tolower(c)-'a'+1);
    }else
    {
        printf("%c is not a aplha!\n",c);
    }
    return 0;
}