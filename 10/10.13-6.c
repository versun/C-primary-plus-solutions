#include <stdio.h>
int re_order(double arr[],int n){
    double tmp;
   for(int i=0; i<n; i++){
       for(int j=0; j<=n-1; j++){
           if(arr[j] < arr[j+1]){
              tmp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = tmp;
           }
       }
   } 
}
int main(void){
    double arr[10] = {1,2,3,4,5,6,7,8,9,10};
    re_order(arr,10);
    for(int i=0; i<10; i++){
        printf("%.1f, ",arr[i]);
    } 
    return 0;
}
