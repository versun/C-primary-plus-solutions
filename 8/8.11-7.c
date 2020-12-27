#include <stdio.h>
#define BASEHRS 40
#define OVERTIME 1.5
#define AMT1 300
#define AMT2 150
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define LINE1 "**********************************************************************\n"
#define LINE2 "Enter the alpha corresponding to the desired pay rate or action:\n"
#define LINE3 "a) $8.75/hr                   b) $9.33/hr\n"
#define LINE4 "c) $10.00/hr                  d) $11.20/hr\n"
#define LINE5 "q) quit\n"
#define LINE6 "**********************************************************************\n"
#define OP1 8.75
#define OP2 9.33
#define OP3 10.00
#define OP4 11.20

int main(void){
    double hours;
    double gross;
    double net;
    double taxes;
    double basepay;
    char op;
    printf("Enter the number of hours worked this week: ");
    scanf("%lf", &hours);
    do
    {    
        printf(LINE1);
        printf(LINE2);
        printf(LINE3);
        printf(LINE4);
        printf(LINE5);
        printf(LINE6);
        scanf("%c", &op);
        switch (op)
        {
        case 'a':
            basepay=OP1;
            break;
        case 'b':
            basepay=OP2;
            break;
        case 'c':
            basepay=OP3;
            break;
        case 'd':
            basepay=OP4;
            break;
        case 'q':
            printf("Bye!");
            return 0;
        default:
            printf(LINE1);
            printf("Please input a right alpha!!\n");
        }
    } while(op<'a'||op>'d');

    if (hours <= BASEHRS)
        gross = hours * basepay;
    else
        gross = BASEHRS * basepay + (hours - BASEHRS) * basepay * OVERTIME;
    if (gross <= AMT1)
        taxes = gross * RATE1;
    else if (gross <= AMT1 + AMT2)
        taxes = AMT1 * RATE1 + (gross - AMT1) * RATE2;
    else
        taxes = AMT1 * RATE1 + AMT2 * RATE2 + (gross - AMT1 - AMT2) * RATE3;

    net = gross - taxes;
    printf("gross: $%.2f; taxes: $%.2f; net: $%.2f\n", gross, taxes, net);
    return 0;
    }