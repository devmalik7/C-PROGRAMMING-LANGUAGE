#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    int guss;
    int count = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    //printf("THE RANDOM NUMBER IS %d", number);

    do
    {

        printf("GUESS THE NUMBER BETWEEN 0 AND 100 :");
        scanf("%d", &guss);
        if (guss < number)
        {
            printf("GUSS THE HIGHER NUMBER PLEASE");
        }
        else if (guss > number)
        {
            printf("GUESS THE LOWER NUMBER PLEASE");
        }
        else
            {
                printf("CONGRATULATIONS YOU HAVE FOUND THE CORRECT NUMBER in 5d attempt", count);
            }  
            
          count++;
    }while(guss != number);

    return 0;
}