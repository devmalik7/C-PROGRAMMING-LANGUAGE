#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    int guess;
    int count = 1;
    srand(time(0));
 main
    number = rand() % 100 + 1; //Variable Number initialized with a Random number

    do
    {

        printf("GUESS THE NUMBER BETWEEN 0 AND 100: ");
        scanf("%d", &guss);
        if (guss < number)
        {
            printf("GUESS A HIGHER NUMBER PLEASE!!!\n");

    number = rand() % 100 + 1;
    printf("Welcome, To The Number Guessing Game...");
    do
    {

        printf("\nGUESS THE NUMBER BETWEEN 0 AND 100 :");
        scanf("%d", &guess);
        if (guess < number)
        {
  main
        }
        else if (guess > number)
        {
 main
            printf("GUESS A LOWER NUMBER PLEASE!!!\n");

            printf("GUESS THE 'LOWER' NUMBER PLEASE");
main
        }
        else
            {
                printf("CONGRATULATIONS YOU HAVE FOUND THE CORRECT NUMBER in %d attempts", count);
            }  
            
          count++;
    }while(guess != number);

    return 0;
}
