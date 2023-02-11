#include <stdio.h>

/*
Pointer arithmetic is the process of performing arithmetic operations on pointers in C, such as addition or subtraction, to move the pointer to different memory locations. When you perform arithmetic on a pointer, the result is a new pointer that points to a memory location that's a certain number of bytes away from the original location.
*/

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    int *ptr = numbers; // numbers is reference to numbers[] array

    printf("ptr is pointing to: %d\n", *ptr);

    ptr++; // increase the reference (address) by 1

    // *ptr is now at 2nd element of numbers[]
    printf("ptr is now pointing to: %d\n", *ptr);

    ptr--; // decrease by 1

    printf("ptr is now pointing to: %d\n", *ptr);

    ptr = ptr + 4;

    printf("ptr is now pointing to: %d\n", *ptr);

    return 0;
}
