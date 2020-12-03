#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    int guss;
    int count = 1;
    srand(time(0));
    number = rand() % 100 + 1; //Variable Number initialized with a Random number

    do
    {

        printf("GUESS THE NUMBER BETWEEN 0 AND 100: ");
        scanf("%d", &guss);
        if (guss < number)
        {
            printf("GUESS A HIGHER NUMBER PLEASE!!!\n");
        }
        else if (guss > number)
        {
            printf("GUESS A LOWER NUMBER PLEASE!!!\n");
        }
        else
            {
                printf("CONGRATULATIONS YOU HAVE FOUND THE CORRECT NUMBER in %d attempts", count);
            }  
            
          count++;
    }while(guss != number);

    return 0;
}
