#include <stdio.h>

int main(void){
    int spaces=0;
    int newlines=0;
    int others=0;
    char ch;

    printf("Enter something(# to quit):\n");
    while ((ch=getchar())!='#')
   {
       if (ch==' ')
        {
            spaces++;
        }else if (ch=='\n')
        {
            newlines++;
        }else{
            others++;
        }             
   }
    printf("%d spaces,%d newlines,%d others",spaces,newlines,others); 
    return 0;
}