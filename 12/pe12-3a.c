#include <stdio.h>
#include <string.h>
#include "pe12-3a.h"
int get(char *,char *,double*,double*);
int check_mode(int *mode,int pre_mode){
    if(*mode>1){
        puts("Invalid mode specified. ");
        *mode = pre_mode;
        if(*mode)
            printf("Mode 1(US) used.\n");
        else
            printf("Mode 0(EU) used.\n");
    }
    return 0;
}
int get_info(int mode, double *distance, double *fuel)
{
    if(mode == 0)
    {
        get("kilomteres","liters",distance,fuel);
    }else if(mode == 1)
    {
        get("miles","gallons",distance,fuel);
    }
    return 0;
}
int get(char *s,char *s2, double *distance, double *fuel){
    printf("Enter distance traveled in %s: ",s);
    scanf("%lf",distance);
    printf("Enter fuel consumed in %s: ",s2);
    scanf("%lf",fuel);
    return 0;
}

int show_info(int mode, double distance, double fuel)
{
    double result;
    if(mode){
        result = distance/fuel;
        printf("Fuel consumption is %.1lf miles per gallon.\n",result);
    }
    else{
        result = fuel/distance*100;
        printf("Fuel consumption is %.2lf liters per 100km.\n",result);
    }
    return 0;
}
