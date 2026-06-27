#include <stdio.h>

int main()
{
    int num = 25, guess;

    printf("Number Guessing Game\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess > num)
            printf("Too High!\n");
        else if(guess < num)
            printf("Too Low!\n");
        else
            printf("Correct Guess!\n");

    } while(guess != num);

    return 0;
}