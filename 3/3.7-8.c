#include <stdio.h>
#define PINT_CUP 2
#define CUP_OUNCE 8
#define OUNCE_SPOON 2
#define SPOON_TEA 3

int main(void){
    float cup,pint,ounce,spoon,tea_spoon;
    printf("How many cup: ");
    scanf("%f",&cup);
    pint = cup/PINT_CUP;
    ounce = cup * CUP_OUNCE;
    spoon = ounce * OUNCE_SPOON;
    tea_spoon = spoon * SPOON_TEA;
    printf("%.1f cup\n%.1f pint\n%.1f ounce\n%.1f spoon\n%.1f tea spoon.\n",\
            cup,pint,ounce,spoon,tea_spoon);
    return 0;
}
