#include <stdio.h>

void increment(int *p) {
    *p += 1;
}

int main(void) {
    // Syntax: &var is the data (hexadecimal int) which encodes the pointer
    int i;
    int *p;
    p = &i;
    printf("%d\n", &i); // 1875060604
    // instantiating with a * tells us that this variable is meant to be a pointer.


    // Dereferencing a pointer allows you to modify a variable in memory rather than in reference
    i = 10;
    printf("%d\n", i); // 10.
    *p = 20;
    printf("variable: %d, pointer: %zu\n", i, *p); // variable: 20, pointer: 20.


    // pointers are useful because they let us get around the limitations
    // of function calling.

    increment(p);
    // previously it would've read 20. But with pointers, it reads 21.
    printf("variable: %d, pointer: %zu\n", i, *p); //variable: 21, pointer: 21



    // Null pointers. Basically sets a pointer to nowhere. 
    int *point;
    point = NULL;
    
    // *point = 12;
    // this will crash because you're trying to modify the data somewhere in the memory
    // but that place in the memory doesn't exist. 
    // in reality C sends the pointer to the 0 index which hardware can catch (I think)

    printf("%zu\n", sizeof(int)); // 4
    printf("%zu\n", sizeof p);    // 8
    printf("%zu\n", sizeof *p);   // 4
}