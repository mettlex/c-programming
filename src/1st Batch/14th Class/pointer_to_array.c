#include <stdio.h>

#define size 3

int main()
{
    int num[] = {100, 200, 300};

    // num array access using index
    for (int i = 0; i < size; i++)
    {
        printf("num[%d] = %d\n", i, num[i]);
    }

    int *p = num; // *p is now pointing to num array

    // access using pointer *p
    for (int i = 0; i < size; i++)
    {
        // when i = 0, *(p + 0) = 100 -> first iteration
        // when i = 1, *(p + 1) = 200 -> second iteration
        // when i = 2, *(p + 2) = 300 -> last iteration
        printf("*(p + %d) = %d\n", i, *(p + i));
    }

    return 0;
}