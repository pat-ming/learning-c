/* Writing bullshit rn */

//   clang -Wall test.c -o test
//   ./test

#include <stdio.h>
 #include <stdbool.h>

int main(void)
{
    int i;   // classic ints:   -3, -2, 9, 1, 0, etc.
    float f; // classic floats: 2.0, 3.1415, 2.718, etc.

    i = 3141592, f = 3.141592;
    char *s = "Hello World!";

    // Including parameters in strings in things like print functions
    // %s - string; %d - integers; %f - floats;

    /*
    Booleans is 0 == False, anything else is true. So 1 is true, 100 is true, -1232109381 is true. 
    If you want standard boolean identifiers, #include <stdbool.h> header works.
    Ex: */
    bool boolean = false; 
    // be careful though
    printf("%d\n", true == 12); // outputs 0 
    printf("%d\n", true == 1); // outputs 1
    printf("%d\n", false == 12); // outputs 0 
    printf("%d\n", false == 0); // outputs 1
    
    // printf("%s, %d, %f.\n", s, i, f);

    // classic operators
    i = i + 8; // i += 8
    i = i - 3; // i -= 3
    i = i * 3; // i *= 3
    i = i / 4; // i /= 4
    i = i % 2; // i %= 2

    // ternary operator
    int x, y; 
    y += x > 10? 17: 37; 
    // roughly means, if the condition is true, do the first argument. Else, second argument. 
    // Is equivalent to 
    if (x > 10)
        y += 17;
    else
        y += 37;

    // Ex:
    printf("%d is %s\n", x, x % 2 == 0? "even": "odd");

    // There is a subtle difference between
    x++;
    x--;
    ++x;
    --x; 
    // The former means that x is in/decremented after the expression is evaluated
    // The latter means that x is in/decremented before the expression is evaluated


    // I don't exactly understand how this works, but if you do
    int tuple = (1,2,3);
    printf(tuple); // output is 3

    // tyles you the size in bytes that it uses in memory
    print(sizeof 3);



    // LOOPS!!!!
    // for(initialize; condition; after each iter)
    for(i = 0; i < 10; i++) {
        printf("%d", i);
    }
    // while, do-while. Difference is that while checks the condition first before running the body
    // Do-while runs the body first before checking the condition.
    int index = 0;
    while (index < 10) {
        print("%d", index);
        index++;
    }
    do {
        print("%d", index);
        index++;
    } while (index < 10);

    



}