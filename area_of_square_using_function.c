#include <stdio.h>
int main()
{
    int side;
  //  float area = pow(side, 2);
    printf("enter the side of the square\n");
    scanf("%d", &side);
    printf("the area of the square is %f", pow(side,2));
    return 0;
}
