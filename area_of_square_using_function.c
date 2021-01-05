#include<stdio.h>
int main(){
    int s;
    printf("Enter the length of a side of the square: ");
    scanf("%d", &s);
    printf("The area of the square is: %f", pow(s,2));
    return 0;
}
