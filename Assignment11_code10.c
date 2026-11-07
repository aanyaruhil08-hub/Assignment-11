/*Modular Program Using static and extern
Create a two-file C program for managing a bank balance. The balance must be accessible only through functions, using static and extern appropriately.*/

#include <stdio.h>

int num = 10;   // global variable definition

void display()
{
    printf("Value of num = %d\n", num);
}

#include <stdio.h>

extern int num;   // refers to num defined in file1.c

void display();

int main()
{
    printf("Before modification:\n");
    display();

    num = 50;   // modifying the global variable

    printf("After modification:\n");
    display();

    return 0;
}