#include <stdio.h>
#define COLS 5
void print_arr(int arr[][COLS],int rows){
    for(int i=0; i<rows; i++){
        for(int j=0; j<COLS; j++){
            printf("%i,",arr[i][j]);
        }
        printf("\n");
    }
}

void double_arr(int arr[][COLS],int rows){
    for(int i=0; i<rows; i++){
        for(int j=0; j<COLS; j++){
            arr[i][j] *= 2;
        }
    }
}
int main(void){
    int arr[3][COLS] = {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
    print_arr(arr, 3);
    double_arr(arr,3);

    print_arr(arr, 3);
    return 0;
}
