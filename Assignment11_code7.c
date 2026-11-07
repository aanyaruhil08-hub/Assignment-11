/*Register Storage Class
Write a C program using the register storage class to calculate the sum of the elements of an array.*/

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