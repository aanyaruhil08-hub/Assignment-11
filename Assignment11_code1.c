/*1. Automatic Local Variables
Write a C program to demonstrate that an automatic variable is created when a block is entered and destroyed when the block is exited.*/

#include <stdio.h>

void demo()
{
    auto int x = 10;   // automatic local variable

    printf("x = %d\n", x);

    x++;
    printf("After increment, x = %d\n", x);
}

int main()
{
    printf("First call:\n");
    demo();

    printf("\nSecond call:\n");
    demo();

    return 0;
}