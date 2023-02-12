#include <stdio.h>

int add_one(int *n) // pass by reference
{
    return ++(*n);
}

int main()
{
    // primitive data type
    // int, long, short, float, double, char
    int x = 1;

    // sending a copy of x to add_one function
    // add_one(x); // pass by value
    // add_one(x); // pass by value
    // add_one(x); // pass by value
    // add_one(x); // pass by value

    // in case of primitive data type
    add_one(&x); // pass by reference
    printf("%d\n", x);
    add_one(&x); // pass by reference
    printf("%d\n", x);
    add_one(&x); // pass by reference
    printf("%d\n", x);
    
    return 0;
}