/*6. Static Global Variable
Write a C program to demonstrate that a global variable declared with static can be accessed only within the same source file.*/

#include <stdio.h>

static int x = 100;   // static global variable

void display()
{
    printf("Static global x = %d\n", x);
}

int main()
{
    printf("Inside file1.c, x = %d\n", x);
    display();

    return 0;
}