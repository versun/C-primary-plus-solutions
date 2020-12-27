#include <stdio.h>

int main(void){
    char ch;
    while ((ch=getchar())!=EOF)
    {
        if (ch==10)
        {
            printf("\\n:%d\n",ch);

        }else if (ch==9)
        {
            printf("\\t:%d\n",ch);
        }else if (ch<32)
        {
            printf("^%c:%d\n",ch+64,ch);
        }
        else
        {
            printf("%c:%d\n",ch,ch);
        }
    }
    
    return 0;
}