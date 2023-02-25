#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];

    printf("Enter a string: ");

    scanf("%[^\n]s", str);

    printf("\n\n");

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}