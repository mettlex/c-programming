#include <stdio.h>

int main()
{
    int size = 10;
    // printf("Enter the size of X: ");
    // scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("y = %d\t", i);

        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                printf("\\");
            }
            else if (i + j == size - 1)
            {
                printf("/");
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