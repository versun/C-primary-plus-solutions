#include <stdio.h>
#include <string.h>
#include "pe12-2a.h"
int get(char *,char *);
int set_mode(int m)
{
    mode = m;
    return 0;
}
int get_info()
{
    if(mode == 0)
    {
        get("kilomteres","liters");
    }else if(mode == 1)
    {
        get("miles","gallons");
    }else if(mode == -1){
        return 0;
    }else{
        puts("Invalid mode specified. Mode 1(US) used.");
        mode = 1;
        get("miles","gallons");
    }
    return 0;
}
int get(char *s,char *s2){
    printf("Enter distance traveled in %s: ",s);
    scanf("%lf",&distance);
    printf("Enter fuel consumed in %s: ",s2);
    scanf("%lf",&fuel);
    return 0;
}

int show_info()
{
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
