#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main()
{
    int i = 10, j = 20;

    printf("\ni = %d, j = %d\n", i, j);

    swap(&i, &j);

    printf("\ni = %d, j = %d\n", i, j);

    swap(&i, &j);

    printf("\ni = %d, j = %d\n", i, j);

    return EXIT_SUCCESS;
}

void swap(int *x, int *y)
{
    int temp = *x; // x is reference, *x has value
    *x = *y;
    *y = temp;
}