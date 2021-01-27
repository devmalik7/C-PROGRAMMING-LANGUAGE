#include<stdio.h>
#include <string.h>
int main()
{
    int i, sum=0, n;
    printf("Enter the number of which the table is to be printed: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++) //loop for printing table
    {
        printf("\n%d * %d = %d",n,i,(n*i)); //formatted so as to print Ex: "2 * 2 = 4"
    }
    return 0;  }
