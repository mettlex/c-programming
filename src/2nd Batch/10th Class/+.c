#include <stdio.h>

int main()
{
    int size = 10;
    // printf("Enter the size of + : ");
    // scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("y = %d\t", i);

        for (int j = 0; j < size; j++)
        {
            if (i == size / 2 - 1)
            {
                printf("--");
            }
            else if (j == size - 1)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}