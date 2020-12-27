/* newguess.c -- an inefficient but improved number-guesser */
#include <stdio.h>
int main(void)
{
    int guess = 50;
    int n_big=100;
    int n_low=0;
    char response;
    
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan b if it is bigger.\n");
    printf("an l if it is lower.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')     /* get response */
    {
        if (response == 'b')
        {   
            n_big = guess;
            guess -= (n_big-n_low)/2;
            printf("Well, then, is it %d?\n", guess);
        }
        else if (response == 'l')
        {
            n_low = guess;
            guess += (n_big-n_low)/2;
            printf("Well, then, is it %d?\n", guess);
        }
        else
        {    printf("Sorry, I understand only b,l or y.\n");}

        while (getchar() != '\n')
            continue;                 /* skip rest of input line */
    }
    printf("I knew I could do it!\n");
    
    return 0;
}
