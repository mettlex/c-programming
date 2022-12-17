#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // initialize random
    srand(time(NULL));

    char player_choice;

    int c_choice_123 = rand() % 3 + 1;

    // nested ternary experession
    char computer_choice = c_choice_123 == 1 ? 'r' : (c_choice_123 == 2 ? 'p' : (c_choice_123 == 3 ? 's' : '\0'));

    do
    {
        printf("Enter r for rock, p for paper or s for scissors: ");

        scanf("%c", &player_choice);

        getchar();

        if (player_choice == 'r' || player_choice == 'p' || player_choice == 's')
        {
            break;
        }
        else
        {
            printf("Invalid Choice. Type again.\n");
        }
    } while (1);

    printf("Computer chose %c\n", computer_choice);

    if (player_choice == 'r')
    {
        printf("You chose Rock\n");

        if (computer_choice == 'r')
        {
            printf("Draw.");
        }
        else if (computer_choice == 'p')
        {
            printf("Computer wins!");
        }
        else
        {
            // computer chose scissors

            printf("You win!");
        }
    }
    else if (player_choice == 'p')
    {
        printf("You chose Paper\n");
    }
    else if (player_choice == 's')
    {
        printf("You chose Scissors\n");
    }

    printf("\nGame Over\n");

    return 0;
}
