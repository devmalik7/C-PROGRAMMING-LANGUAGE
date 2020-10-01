#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    int guess;
    int count = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Welcome, To The Number Guessing Game...");
    do
    {

        printf("\nGUESS THE NUMBER BETWEEN 0 AND 100 :");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("GUESS THE 'HIGHER' NUMBER PLEASE");
        }
        else if (guess > number)
        {
            printf("GUESS THE 'LOWER' NUMBER PLEASE");
        }
        else
            {
                printf("CONGRATULATIONS YOU HAVE FOUND THE CORRECT NUMBER in %d attempts", count);
            }  
            
          count++;
    }while(guess != number);

    return 0;
}
