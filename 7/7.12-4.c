#include <stdio.h>

int main(void){
    int ct1=0;
    int ct2=0;
    char ch;
    while ((ch=getchar())!='#')
    {
        if (ch=='.')
        {
            putchar('!');
            ct1++;
        }else if (ch=='!')
        {
            putchar('!');
            putchar('!');
            ct2++;
        }else
        {
            putchar(ch);
        }
    }

    printf("%d replacement(s) of . with !\n", ct1);
    printf("%d replacement(s) of ! with !!\n", ct2);        
    return 0;
}