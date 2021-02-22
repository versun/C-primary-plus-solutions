#include <stdio.h>
int copy_ptr(double *target,double *source,int n){
    for(int i=0;i<n;i++){
       (*target++) = *(source+i);                
    }
    return 0;
}
int main(void){
    double a1[][4] = {{1,2,3,4},{5,6,7,8}};
    double n_a[2][4];
    for(int i=0; i<2; i++){
        copy_ptr(n_a[i],a1[i],4);
    }
    for(int i=0; i<2;i++){
        for(int j=0; j<4; j++){
            printf("%.2f,",n_a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
