#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(0); // this is allowed, but why?

    if (p == NULL)
    {
        printf("Cannot allocate requested memory\n");
        return 1;
    }

    printf("%p\n", p);

    p = realloc(p, sizeof(int) * 100); // 100 ints = 400 bytes

    if (p == NULL)
    {
        printf("Cannot reallocate requested memory\n");
        return 1;
    }

    printf("%p\n", p);

    free(p);

    p = malloc(4); // only 1 int = 4 bytes

    free(p);

    return 0;
}