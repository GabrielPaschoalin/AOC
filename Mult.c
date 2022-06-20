#include <stdio.h>

#define ROWS 8
#define COLS 8

int main (){

    int A[ROWS][COLS] = {{1,2},{3,4},{1,2},{3,4},{1,2},{3,4},{1,2},{3,4}};
    int B[ROWS][COLS] = {{5,6},{7,8},{5,6},{7,8},{5,6},{7,8},{5,6},{7,8}q};
    int C[ROWS][COLS];
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
