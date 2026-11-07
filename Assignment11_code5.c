/*5. Unique ID Generator Using static
Write a C program using a static variable to generate a unique identification number every time a function is called.*/

#include <stdio.h>

int generateID()
{
    static int id = 1000;

    id++;
    return id;
}

int main()
{
    printf("ID: %d\n", generateID());
    printf("ID: %d\n", generateID());
    printf("ID: %d\n", generateID());
    printf("ID: %d\n", generateID());

    return 0;
}