#include <stdio.h>

int main()
{
    int x = 100;
    int *ptr;

    ptr = &x; // &x is reference to x which holds memory address

    printf("Value of x = %d\n", x);

    printf("Address of x = %p (&x)\n", &x);

    printf("Value stored at ptr = %p (ptr)\n", ptr);

    printf("Value stored at *ptr = %d\n", *ptr);
    // *ptr - here * is indirection/dereference operator

    return 0;
}