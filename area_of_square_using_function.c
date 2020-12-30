#include<stdio.h>
int main(){
    int side;
    printf("Enter the length of a side of the square: ");
    scanf("%d", &side);
    printf("The area of the square is: %f", pow(side,2));
    return 0;
}
