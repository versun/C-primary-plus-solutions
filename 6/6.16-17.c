#include <stdio.h>

int main(void){
    float chuckie=100;
    int years=0;
    do
    {
        chuckie+=chuckie*0.08;
        chuckie-=10;
        years++;
    } while (chuckie>=10);
    printf("%d years later.\n",years);
    return 0;
}