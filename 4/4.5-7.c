#include <stdio.h>
#include <float.h>

int main(void){
    float f_result=1.0/3.0;
    double d_result=1.0/3.0;

    printf("FLT_DIG=%d,DBL_DIG=%d\n",FLT_DIG,DBL_DIG);
    printf("f6  = %.6f \nd6  = %.6lf\n",f_result,d_result);
    printf("f12 = %.12f \nd12 = %.12lf\n",f_result,d_result);
    printf("f16 = %.16f \nd16 = %.16lf\n",f_result,d_result);
    
    return 0;
}