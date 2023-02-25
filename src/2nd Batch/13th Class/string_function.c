#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char password[] = "durbol_password123";

    char user_input[100];

    int count = 1;

    while (1)
    {
        printf("\nEnter password: ");

        scanf("%s", user_input);

        if (strcmp(user_input, password) == 0)
        {
            printf("Password Matched!\n");
            break;
        }
        else
        {
            printf("Wrong password!");

            count++; // 4

            if (count > 3)
            {
                printf("\nMax attempt reached!\n");
                // return 1;
                exit(1);
            }
        }
    }

    return 0;
}