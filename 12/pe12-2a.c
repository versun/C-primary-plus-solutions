#include <stdio.h>
#include <string.h>
#include "pe12-2a.h"
int get(char *,char *,int);
int set_mode(int m)
{
    pre_mode = mode;
    mode = m;
    return 0;
}
int get_info()
{
    if(mode == 0)
    {
        get("kilomteres","liters",0);
    }else if(mode == 1)
    {
        get("miles","gallons",0);
    }else if(mode == -1){
        return 0;
    }else{
        printf("Invalid mode specified."); 
        mode = pre_mode;

        get("miles","gallons",1);
    }
    return 0;
}
int get(char *s,char *s2,int invalid){
    if(invalid){
        if(mode){
            printf("Mode 1(US) used.\n");
        }else{
            printf("Mode 0(EU) used.\n");
        }
    }
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
