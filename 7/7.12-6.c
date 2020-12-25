#include <stdio.h>

int main(void){
    /*Method-1
    int ct=0;
    int is_e=0;
    char ch;
    while ((ch=getchar())!='#')
    {
        if (ch=='e' && is_e==0)
        {
            is_e=1;
        }else if (ch=='i' && is_e==1)
        {
            ct+=1;
            is_e=0;
        }else
        {
            is_e=0;
        } 
    }
    */
    int ct=0;
    char f_ch='a',c_ch;
    while ((c_ch=getchar())!='#')
    {
        switch (c_ch)
        {       
        case 'e':
            f_ch='e';
            break;
        case 'i':
            if(f_ch=='e'){
                ct+=1;
                f_ch='a';
            }
        default:
            f_ch='a';
        }  
    }

    printf("Have %d \"ei\"",ct);
    return 0;
}