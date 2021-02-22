#include <stdio.h>
#define COLS 5
int cp_arr(double target[][COLS],double source[][COLS],int rows){
	for(int i=0; i<rows; i++){
		for(int j=0; j<COLS; j++){
			target[i][j] = source[i][j];	
		}
	}
	return 0;
}
int print_arr(double arr[][COLS], int rows){
	for(int i=0; i<rows; i++){
		for(int j=0; j<COLS; j++){
			printf("%.2f,",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int main(void){
       double source[3][COLS] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
       double target[3][COLS];
       cp_arr(target, source, 3);
       print_arr(target,3);
    return 0;
}
