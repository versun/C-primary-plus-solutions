#include <stdio.h>

int main(void){
    float daphne=100,deirdre=100;
    int years=0;
    do
    {
        years++;
        daphne+=100*0.1;
        deirdre+=deirdre*0.05;
    } while (deirdre<daphne);
    printf("%d years later.\nDeirdre has $%.2f\nDaphne has $%.2f\n",years,deirdre,daphne);
    return 0;
}