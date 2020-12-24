#include <stdio.h>

int main(void){
    char alphabet[26];
    char c='a';
    for (int i = 0; i < 26; i++,c++)
    {
        alphabet[i]=c;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c",alphabet[i]);
    }
    
    
    return 0;
}