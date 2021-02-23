#include <stdio.h>

int create_datas(int rows,int cols,double arr[rows][cols]){
    for(int i=0; i<rows; i++){
        printf("Ready to create the %i arr!\n",i);
        printf("Input 5 numbers:\n");
        for(int j=0; j<cols; j++){
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
double avg_all(int rows,int cols,double arr[rows][cols]){
    double sum=0.0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum += arr[i][j];
        }
    }
    return sum/(cols*rows);
}
double max_num(int rows,int cols,double arr[rows][cols]){
    double max=arr[0][0];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(max<arr[i][j])
                max = arr[i][j];
        }
    }
    return max;
}
void print_results(int rows,int cols,double arr[rows][cols]){
    double per_avg[rows];
    double all_avg;
    double max;
    // b
    for(int i=0; i<rows; i++){
        per_avg[i] = avg_per_arr(arr[i],cols);
    }
    // c
    all_avg = avg_all(rows,cols,arr);
    //d
    max = max_num(rows,cols,arr);         

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
    int rows = 3;
    int cols = 5;
    double arr[rows][cols];
    // a
    create_datas(rows,cols,arr);

    print_results(rows,cols,arr);

    return 0;
}
