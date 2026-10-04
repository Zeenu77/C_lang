#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // Seed the random number generator

    int num = rand() % 100 + 1; // Random number from 1 to 100
    int guessed_no, no_of_guesses = 0;
    do
    {
        printf("Guess the no.");
        scanf("%d", &guessed_no);
        if (guessed_no > num)
        {
            printf("The guessed no. is greater. Choose a smaller no.\n");
        }
        else if (guessed_no < num)
        {
            printf("The guessed no. is smaller. Choose a greater no.\n");
        }
        no_of_guesses++;
    } while (guessed_no != num);

    printf("Yess the Random number was: %d.\n and you guessed it in %d guesses", num, no_of_guesses);
    return 0;
}
