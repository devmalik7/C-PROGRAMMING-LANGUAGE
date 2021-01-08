#include <stdio.h>
int main()
{
    int side;   //float area = pow(side, 2);
    printf("Enter the side of the square: \n");
    scanf("%d", &side);
    printf("The area of the square is: %f", pow(side,2));
    return 0;
}
