#include <stdio.h>

int dif(double arr[],int n){
    double max = arr[0];
    double min = arr[0];
    for(int i=1; i<n; i++){
       if(max<arr[i]){
            max = arr[i];
        }
       if(min>arr[i]){
            min = arr[i];
        }
       
    }
    return max-min;
}

int main(void){
    double a[10]={1,2,3,4,5,33,6,8,9,9};
    double difv = dif(a,10);
    printf("%f\n",difv);
    return 0;
}
