#include <stdio.h>

int max(double arr[],int n){
    double max = arr[0];
    int index=0;
    for(int i=1; i<n; i++){
       if(max<arr[i]){
            max = arr[i];
            index = i;
    }
    }
    return index;
}

int main(void){
    double a[10]={1,2,3,4,5,33,6,8,9,9};
    printf("%i\n",max(a,10));
    return 0;
}
