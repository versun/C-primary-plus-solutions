#include <stdio.h>

int main(void){
    int max_int=2147483647;
    float max_float=3.4e38; //3.4e38
    float min_float=-3.4e38;
    printf("max int:%d, over int:%d\n",max_int,max_int+1);
    printf("min float:%f,max float:%f;\nunder float:%f, over float:%f",min_float,max_float,min_float*10,max_float*10);
    return 0;
}