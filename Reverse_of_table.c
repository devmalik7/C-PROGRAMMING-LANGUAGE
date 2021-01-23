#include<stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    printf("****Multiplication table of 10****\n\n");
    for(int i=10;i>=0;i--)
    {
        printf("10 X %d = %d\n", i, 10*i);
    }
    return 0;
}
