#include <stdio.h>

int main()
{
    char str[] = "Hello World!"; // array of char's (string)

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("str[%d] = %c\n", i, str[i]);
    }

    printf("\n");

    // now using pointer
    for (char *p = str; *p != '\0'; p++)
    {
        printf("*p = %c\n", *p);
    }

    printf("\n");

    return 0;
}