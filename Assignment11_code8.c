/*Extern Storage Class
Write a C program using two source files to demonstrate the use of extern for accessing a global variable.*/

#include <stdio.h>

int num = 100;   // global variable definition

void display()
{
    printf("Value of num in file1 = %d\n", num);
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