#include <stdio.h>

int main(void) {
    /* MULTIDIMENSIONAL ARRAYS */
    //int a[10];
    //int b[2][7]; 
    //int c[4][5][6];

    int row, col;
    
    int a[2][3] = {
        {0, 1, 2},
        {3, 4, 5}
    };

    for (row = 0; row < 2; row++) {
        for (col = 0; col < 3; col++) {
            printf("(%d, %d) = %d\n", row, col, a[row][col]);
        }
    }

    // initialize explicit matrices. Here's the identity matrix.
    int I[3][3] = {[0][0] = 1, [1][1] = 1, [2][2] = 1}; 
}