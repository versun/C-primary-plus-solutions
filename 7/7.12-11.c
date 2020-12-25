#include <stdio.h>
#include <ctype.h>
#define ARTICHOKES 2.05
#define BEET 1.15
#define CARROT 1.09

int input_menu();
int check();
double cost_beet=0.0;
double cost_carrot=0.0;
double cost_artichokes=0.0;
double cost_sum=0.0;
double lb_beet=0.0;
double lb_carrot=0.0;
double lb_artichokes=0.0;
double lb_sum=0.0;
double cost_express=0.0;
const double express_1=6.5;  // lg <= 5
const double express_2=14;   // 5 < lg <=20
const double express_3=0.5;  // lg > 20, 14+0.5/(lg-20)
double discount=0.0;

int main(void){

    char op;
    double lb;
    input_menu();
    while(1)
    {
        if (isspace(op=getchar()))
        {
            continue;
        }

        switch (op)
        {
        case 'a':
            printf(" Enter artichokes weight(lb):");
            scanf("%lf",&lb);
            lb_artichokes += lb;

            break;
        case 'b':
            printf(" Enter beet weight(lb):");
            scanf("%lf",&lb);
            lb_beet += lb;

            break;
        case 'c':
            printf(" Enter carrot weight(lb):");
            scanf("%lf",&lb);
            lb_carrot += lb;

            break;
        case 'q':
            if ( lb_beet+lb_artichokes+lb_carrot == 0){
                printf("Bye!");
            }else{
                check();
            }
            return 0;
        default:
            printf("\nPlease input a correct alphabte!!\n");      
        }
        input_menu();
    }
    check();
    return 0;
}

int input_menu()
{
    printf("\n");
    printf("|-----------------------------------------------------|\n");
    printf("|                   ABC Grocery Store                 |\n");
    printf("|-----------------------------------------------------|\n");
    printf("| a) Artichoke           b) Beet                      |\n");
    printf("| c) Carrot                                           |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|                      q) Quit                        |\n");
    printf("|-----------------------------------------------------|\n");
    printf(" Your choice: ");
    return 0;
}
int check(){
    cost_artichokes = lb_artichokes*ARTICHOKES;
    cost_beet = lb_beet*BEET;
    cost_carrot = lb_carrot*CARROT;

    cost_sum = cost_artichokes+cost_beet+cost_carrot;
    lb_sum = lb_beet+lb_artichokes+lb_carrot;

    if (lb_sum <= 5){
        cost_express = express_1;
    }
    else if(lb_sum <= 20){
        cost_express = express_2;
    }
    else{
        cost_express = 14+(lb_sum-20)*express_3;
    }
    
    if (cost_sum>=100)
    {
        discount = 0.05;
        cost_sum*=(1-discount);
    }   

    printf("\n");
    printf("|-----------------------------------------------------|\n");
    printf("|                        Checkout                     |\n");
    printf("|-----------------------------------------------------|\n");
    printf("  Artichoke($%.2f/lb)    : %.2f lb  cost:$%.2f\n",ARTICHOKES,lb_artichokes,cost_artichokes);
    printf("  Beet($%.2f/lb)         : %.2f lb  cost:$%.2f\n",BEET,lb_beet,cost_beet);
    printf("  Carrot($%.2f/lb)       : %.2f lb  cost:$%.2f\n",CARROT,lb_carrot,cost_carrot);
    printf("  Express & Pacage cost  : $%.2f\n",cost_express);
    printf("  Discount               : %.2f off\n",discount);
    printf("  Sum cost               : $%.2f\n",cost_sum);
    printf("|-----------------------------------------------------|\n");
    printf("|-----------------------------------------------------|\n");    
    return 0;
}
