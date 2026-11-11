#include <stdio.h>
#define COUNT 5

void length(int x[12]) {
    printf("%zu\n", sizeof x); 
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof x / sizeof(int));
}

int main(void ) {
    int i;
    float f[4]; // this declares an array of 4 floats. 
    // float is the dtype, f is the name, the number is the size. 
    
    // 0-indexed as per usual.
    f[0] = 3.14159;
    f[1] = 2.71828;
    f[2] = 1.61803;
    f[3] = 1.41421;

    for (int i = 0; i < 4; i++) {
        printf("%f, ", f[i]);
    } 
    printf("\n");

    // Calculate the length of an array by dividing the total allocated memory 
    // by the allocated memory per index.
    int x[12];
    printf("Size = %zu\n", sizeof x / sizeof x[0]); // using sizeof(int) in the denominator also works

    length(x); // you would think this is 12 but it's not! it's 2. 
    // this is because when you pass an array to a function, you only pass the pointer
    // to the first element. That's what sizeof measures: that first element rather than the array.

    // Initializing an array ahead of time
    int a[5] = {2, 3, 5, 7, 11};
    for (int i = 0; i < 5; i++) {
        printf("%d, ", a[i]);
    }
    // obviously, dont have more items in the initializer than the size you determined.
    

    /* Other Initialization tricks */
    // intentionally not filling an array?
    int b[5] = {2,3}; // b = [2, 3, 0, 0, 0]
    int c[100] = {0}; // array of 100 0s

    printf("\n");
    // specifying indices
    int d[10] = {2, 3, [6]=5, 9};
    for (int i = 0; i < 10; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");
    // reads: [2 3 0 0 0 0 5 9 0 0]

    // Constant expressions:
    int e[COUNT] = {[COUNT-3]=3, 2, 1}; // reads [0 0 3 2 1]

    // compute the size without initialization. These are the same,
    int g[3] = {3,2,1};
    int h[] = {3,2,1};
}