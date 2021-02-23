#include <stdio.h>
#define COLS 5
int add_arr(int arr_1[], int arr_2[], int sum_arr[],int n){
    for(int i=0; i<n; i++){
        sum_arr[i] = arr_1[i] + arr_2[i];
    }
    return 0;
}
int main(void){
    int arr_1[COLS] = {1,2,3,4,5};
    int arr_2[COLS] = {5,4,3,2,1};
    int sum_arr[COLS];
    add_arr(arr_1, arr_2, sum_arr, COLS);
    
    for(int i=0; i<COLS; i++){
        printf("%i",sum_arr[i]);
    }
    return 0;
}
