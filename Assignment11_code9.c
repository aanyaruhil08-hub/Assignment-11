/*Modifying a Global Variable Using extern
Write a C program using two source files in which one source file defines a global variable and another source file modifies it using extern.*/

#include <stdio.h>

int num = 10;   // global variable definition

void display()
{
    printf("Value of num = %d\n", num);
}

#include <stdio.h>

extern int num;   // declaration of global variable

void display();

int main()
{
    printf("Value of num in file2 = %d\n", num);

    display();

    return 0;
}