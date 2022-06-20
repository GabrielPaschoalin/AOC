#include <stdio.h>

#define ROWS 8
#define COLS 8

int main (){

    int A[ROWS][COLS] = {{1,2},{3,4},{1,2},{3,4},{1,2},{3,4},{1,2},{3,4}};
    int B[ROWS][COLS] = {{5,6},{7,8},{5,6},{7,8},{5,6},{7,8},{5,6},{7,8}};
    int C[ROWS][COLS];

    int i,j;

    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

}
