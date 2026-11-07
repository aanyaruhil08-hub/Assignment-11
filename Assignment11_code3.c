/*Automatic and Static Variables
Write a C program that calls the same function several times and compares the behaviour of an automatic variable with a static variable.*/

#include <stdio.h>

void demo()
{
    int a = 0;          // automatic variable
    static int s = 0;   // static variable

    a++;
    s++;

    printf("Automatic = %d, Static = %d\n", a, s);
}

int main()
{
    demo();
    demo();
    demo();

    return 0;
}