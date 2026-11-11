#include <stdio.h>

// in essence very similar to java functions.
int increment(int n) {
    n += 1;
    return n;
}


int main(void) {
    int i = 10;
    int j = increment(i);

    printf("i = %d, j = %d\n", i, j);
}