#include<stdio.h>
int main()
{
    int i, sum=0, n;
    printf("Enter the number of which the table is to be printed: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("\n%d * %d = %d",n,i,(n*i));
    }
}
