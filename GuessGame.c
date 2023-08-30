#include <stdio.h>
#include <stdlib.h>
#include "GuessGame.h"

int main()
{
    system("clear");

    game();

    return 0;
}

void game()
{
    int secretNumber = 5;
    int guess;
    int guessLimit = 3;
    int guessCount = 0;

    while (guess != secretNumber && guessCount < guessLimit)
    {
        printf("Enter guess: ");
        scanf("%d", &guess);
        guessCount++;
    }
    
    if (guess == secretNumber)
    {
        printf("You Win !\n");
    }
    else
    {
        printf("You Lose !\n");
    }
}
