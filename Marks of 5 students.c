
#include <stdio.h>
#include <string.h>

int main ()
{
    int i=5;
    int mark[5];
    for(i=0;i<5;i++)
    {
         printf("Enter the  marks of  %d:",i+1);
         scanf("%d", &mark[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("The markes of %d is %d\n", i+1 ,mark[i]);
    }
    return 0; 
}
