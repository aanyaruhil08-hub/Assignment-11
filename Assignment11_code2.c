/*Block Scope and Shadowing
Write a C program to demonstrate how a local variable hides a global variable with the same name.*/

#include<stdio.h>

int x=100;

int main()
{
    printf("Global x=%d\n", x);
    {
        int x = 20;
        printf("Inside block, x=%d\n",x);
    }
    printf("outside block, x=%d\n", x);
    
    return 0;
}