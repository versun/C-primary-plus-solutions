#include <stdio.h>

int main(void){
    int age;
    float  second;
    printf("Input your age: ");
    scanf("%d",&age);
    second = age * 3.156e7;
    printf("You are %e seconds old.",second);
    return 0;
}