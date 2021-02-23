#include <stdio.h>
#define ROWS 3
#define COLS 5

int create_datas(double arr[][COLS],int rows){
    for(int i=0; i<rows; i++){
        printf("Ready to create the %i arr!\n",i);
        printf("Input 5 numbers:\n");
        for(int j=0; j<COLS; j++){
            scanf("%lf",&arr[i][j]);
    }
}
return 0;
}
double avg_per_arr(double arr[],int cols){
    double sum=0;
    for(int i=0; i<cols; i++){
        sum+=arr[i];
    }
    return sum/cols;
}
double avg_all(double arr[][COLS],int rows){
    double sum=0.0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<COLS; j++){
            sum += arr[i][j];
        }
    }
    return sum/(COLS*rows);
}
double max_num(double arr[][COLS],int rows){
    double max=arr[0][0];
    for(int i=0; i<rows; i++){
        for(int j=0; j<COLS; j++){
            if(max<arr[i][j])
                max = arr[i][j];
        }
    }
    return max;
}
void print_results(double arr[][COLS],int rows){
    double per_avg[rows];
    double all_avg;
    double max;
    // b
    for(int i=0; i<ROWS; i++){
        per_avg[i] = avg_per_arr(arr[i],COLS);
    }
    // c
    all_avg = avg_all(arr, ROWS);
    //d
    max = max_num(arr, ROWS);         

//Print result
    printf("per_avg is:\n");
    for(int i=0; i<rows; i++){
            printf("%.2f,",per_avg[i]);
        }
    printf("\n"); 
    printf("All avg is: %.2f\n",all_avg);
    printf("Max num is: %.2f\n",max);
                                        
}

int main(void){
    double arr[ROWS][COLS];
    // a
    create_datas(arr, ROWS);

    print_results(arr, ROWS);

    return 0;
}
