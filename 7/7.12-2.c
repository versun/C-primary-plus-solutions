#include <stdio.h>
#include <ctype.h>

int main(void){
    char str[255];
    int i=0;
    while ((str[i]=getchar())!='#')
    {
        i++;
    }
    i-=2; //Delete # and last \n

    for (int j = 0; j <= i;)
    {
        if (isspace(str[j]))
        {
            printf(" (%d);",str[j]);
        }else{  
            printf("%c(%d);",str[j],str[j]);
        }
        j++;
        if (j%8==0)
        {
            putchar('\n');
        }
    }
    
    
    
    return 0;
}