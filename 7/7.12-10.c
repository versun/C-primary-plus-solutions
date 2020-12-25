#include <stdio.h>
#define BASE_RATE 0.15
#define OVER_RATE 0.28
#define SINGLE 17850
#define MASTER 23900
#define MARRIED 29750
#define DIVORCED 14875
#define LINE1 "**********************************************************************\n"
#define LINE2 "* Enter the number corresponding to the desired type or action:      *\n"
#define LINE3 "* 1) Single                   2) Master                              *\n"
#define LINE4 "* 3) Married                  4) Divorced                            *\n"
#define LINE5 "* 5) quit                                                            *\n"      
#define LINE6 "**********************************************************************\n"
#define LINE7 "Your choice: "

int input_menu();
int cal_taxes(int type,double money);
int main(void){
    int op;
    double taxes;
    double money;
    while (1)
    {
        printf("Enter the number of your money($): ");
        scanf("%lf", &money);
        input_menu();
        scanf("%d",&op);

        switch (op)
        {
        case 5:
            printf("Bye!\n");
            return 0;
        case 1:
            cal_taxes(SINGLE,money);
            break;
        case 2:
            cal_taxes(MASTER,money);
            break;
        case 3:
            cal_taxes(MARRIED,money);
            break;
        case 4:
            cal_taxes(DIVORCED,money);
            break;
        
        default:
            printf(LINE1);
            printf("Please input a correct number!!");
        }        
    }
    return 0;
}

int input_menu()
{
    printf(LINE1);
    printf(LINE2);
    printf(LINE3);
    printf(LINE4);
    printf(LINE5);
    printf(LINE6);
    printf(LINE7);
    return 0;
}
int cal_taxes(int type,double money){
    double taxes;
    taxes = money<=type ? money*BASE_RATE : (money-type)*OVER_RATE+(type*BASE_RATE);
    printf("You should pay $%.2lf taxes\n\n",taxes);
    return 0;
}