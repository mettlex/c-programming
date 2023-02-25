#include <stdio.h>
#include <stdlib.h>

int main()
{
    // we need to 2 memory spaces for 2 ints
    int *a = malloc(sizeof(int) * 2);
    // one for user input
    // another for loop iterations

    printf("Enter a number: ");
    scanf("%d", a);

    // Multiplication Table:

    // just using pointer arithmetic instead of int i
    for (*(a + 1) = 1; *(a + 1) <= 10; (*(a + 1))++)
    {
        /*
            Suppose, *a is x and *(a + 1) is i, then
            x * i = product = (*a) * (*(a + 1))
        */
        printf("%d x %d = %d\n", *a, *(a + 1), *a * *(a + 1));
    }

    free(a);

    return 0;
}