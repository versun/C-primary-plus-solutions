#include <stdio.h>
#include <ctype.h>
int main(void){
    int ct_word=0;
    int ct_alpha=0;
    int word_end=0;
    char ch;
    while ((ch=getchar())!=EOF)
    {
        if (isalpha(ch))
        {
            word_end=0;
            ct_alpha+=1;
        }else if (isspace(ch)||ispunct(ch))
        {
            if (word_end==0)
            {
                ct_word+=1;
                word_end=1;
            }
        }        
    }
    printf("Has %d words\nHas %d alphas\naverage alplhas per word is:%d",ct_word,ct_alpha,ct_alpha/ct_word);
    
    return 0;
}