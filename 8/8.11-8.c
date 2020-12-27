#include <stdio.h>

int get_number();
float check_number();
float a,b;

int main(void){
    char method;

    do
    {
        printf("Enter the operation of your choice:\n"); 
        printf("a. add            s. subtract\n");
        printf("m. multiply       d. divide\n");
        printf("q. quit\n");
        while ((method=getchar())=='\n')
        {
            continue;
        }
        
        switch (method)
        {
        case 'a':
            get_number();

            printf("%.1f + %.1f = %.1f\n\n",a,b,a+b);
            break;
        case 's':
            get_number();
                   
            printf("%.1f - %.1f = %.1f\n\n",a,b,a-b);
            break;
        case 'm':
            get_number();
            
            printf("%.1f * %.1f = %.1f\n\n",a,b,a*b);
            break;
        case 'd':
            get_number();
            
            while (b==0.0)
            {
            printf("Enter a number other than 0: ");
            b = check_number();
            }
            printf("%.1f / %.1f = %.1f\n\n",a,b,a/b);
            break;
        case 'q':
            printf("Done!");
            return 0;
        default:
            break;
        }
        
    } while (method != 'q');
    return 0;
}
int get_number()
{   
    printf("Enter first number: ");
    a = check_number();
    printf("Enter second number: ");
    b = check_number();
    return 0;
}

float check_number(){
    float n;
    char c;
    while (scanf("%f",&n)!=1)
    {   while ((c=getchar())!='\n')
        {   
            putchar(c);
        }
        printf(" is not an number.\n");    
        printf("Please enter a number, such as 2.5, -1.87E8, or 3: ");
    }
    return n;
}