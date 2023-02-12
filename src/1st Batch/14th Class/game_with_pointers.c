#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 26
#define GUESS_COUNT 5

int main()
{
    srand(time(NULL));

    int player_wins = 0; // flag

    char alphabet[SIZE], computer_guesses[GUESS_COUNT], player_guess;

    char *p = alphabet;

    for (int i = 0; i < SIZE; i++)
    {
        *(p + i) = i + 65;
    }

    for (int i = 0; i < GUESS_COUNT; i++)
    {
        // computer guessed a few letters
        computer_guesses[i] = (rand() % SIZE) + 65;
    }

    printf("Computer guessed %d letters from A-Z.\n\n", GUESS_COUNT);

    printf("Enter your guess: ");
    scanf("%c", &player_guess);

    if (player_guess > 'Z')
    {
        player_guess -= 32;
    }

    for (int i = 0; i < GUESS_COUNT; i++)
    {
        if (player_guess == computer_guesses[i])
        {
            player_wins = 1;
            break;
        }
    }

    printf("\nComputer guessed: ");

    for (int i = 0; i < GUESS_COUNT; i++)
    {
        printf("%c%c ", computer_guesses[i], i == GUESS_COUNT - 1 ? ' ' : ',');
    }

    if (player_wins)
    {
        printf("\n\nSo You Win!\n");
    }
    else
    {
        printf("\n\nSo You lose!\n");
    }
}