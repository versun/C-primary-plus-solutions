#include <stdio.h>
#include <string.h>

int main(void){
    char str[26];
    printf("Input a word:");
    scanf("%s",str);
    for (int i = strlen(str); i>=0; i--)
    {   
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}