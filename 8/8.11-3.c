#include <stdio.h>
#include <ctype.h>
int main(void){
    int ct_upper=0;
    int ct_lower=0;
    char ch;
    while ((ch=getchar())!=EOF)
    {
        if (isupper(ch))
        {
            ct_upper+=1;
        }else if (islower(ch))
        {
            ct_lower+=1;
        }
    }
    printf("upper has %d\nlower has %d\n",ct_upper,ct_lower);
    
    return 0;
}