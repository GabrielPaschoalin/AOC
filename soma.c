#include <stdio.h>

#define ROWS 16
#define COLS 16

int main (){

    int A[ROWS][COLS] = {{1,2},{3,4},{1,2},{3,4},{1,2},{3,4},{1,2},{3,4},{1,2},{3,4},{1,2},{3,4},{1,2},{3,4},{1,2},{3,4}};
    int B[ROWS][COLS] = {{5,6},{7,8},{5,6},{7,8},{5,6},{7,8},{5,6},{7,8},{5,6},{7,8},{5,6},{7,8},{5,6},{7,8},{5,6},{7,8}};
    int C[ROWS][COLS];

    int i,j;

    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

}

/*
addi I
add R
slt R
beq I
sll R
lw I
sw I
j J
mul R

op - 3
*/