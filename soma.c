#include <stdio.h>

#define ROWS 2
#define COLS 2

 
void matrix_sum(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]){
    
    int i,j;

    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void matrix_multiplication(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]){
 
    int i=0,j=0,k=0;
    int sum = 0;

    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            for(k = 0; k < ROWS; k++){
               sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
            sum = 0;
        }
    }
}

void matrix_transposed(int A[ROWS][COLS], int C[ROWS][COLS]){
    
    int i,j;

    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            C[j][i] = A[i][j];
        }
    }
}

int main (){

    int A[ROWS][COLS] = {{1,2},{3,4},{1,2},{3,4},{1,2},{3,4},{1,2},{3,4},{1,2},{3,4},{1,2},{3,4},{1,2},{3,4},{1,2},{3,4}};
    int B[ROWS][COLS] = {{5,6},{7,8},{5,6},{7,8},{5,6},{7,8},{5,6},{7,8},{5,6},{7,8},{5,6},{7,8},{5,6},{7,8},{5,6},{7,8}};
    int C[ROWS][COLS];

    //matrix_sum(A,B,C);
    //matrix_multiplication(A,B,C);
    matrix_transposed(A,C);

    int i,j;

    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            printf ("%i ", C[i][j]);
        }
        printf("\n");
    }

}