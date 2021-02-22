#include <stdio.h>
int copy_ptr(double *target,double *source,int n){
    for(int i=0;i<n;i++){
       (*target++) = *(source+i);                
    }
    return 0;
}
int main(void){
    double a1[7] = {1,2,3,4,5,6,7};
    double n_a[3];
    copy_ptr(n_a,&a1[2],3);
    for(int i=0; i<3;i++){
            printf("%.2f,",n_a[i]);
        }
        printf("\n");
    return 0;
}
