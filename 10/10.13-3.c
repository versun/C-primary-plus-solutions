#include <stdio.h>

int max(int arr[],int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(max<arr[i])
            max = arr[i];
    }
    return max;
}

int main(void){
    int a[10]={1,2,3,4,5,6,8,9,9,11};
    printf("%i\n",max(a,10));
    return 0;
}
