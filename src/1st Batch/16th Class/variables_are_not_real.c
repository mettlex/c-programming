#include <stdio.h>

int main()
{
    int a = 301;
    int b = 302;

    printf("&a = %p\n", &a);
    printf("&b = %p\n\n", &b);

    // if you're using clang:
    *(&a - 1) = 777;

    // if you're using gcc:
    *(&a + 1) = 777;

    printf("b = %d\n", b);

    return 0;
}