#include <stdio.h>

int main(void){
    float speed,size,time;
    printf("Input the net speed(Mbit/s):");
    scanf("%f",&speed);
    printf("Input the file size(MB):");
    scanf("%f",&size);
    time = size*8/speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes download in %.2f seconds",speed,size,time);
    
    return 0;
}