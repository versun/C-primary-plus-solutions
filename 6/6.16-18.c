#include <stdio.h>
#define DENBA 150

int main(void){
    int friends=5;
    int weeks=0;
    do
    {
        weeks++;
        friends-=weeks;
        friends*=2;
        printf("%d weeks has %d friends.\n",weeks,friends);
    } while (friends<DENBA);
    return 0;
}