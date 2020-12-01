#include<stdio.h>
//importing package
int main(){
    int i=1, sum=0, n=10;
    while( i<=n){ //loop for sum of the first 10 natural numbers
        sum +=i;
        i++; 
    }
    printf("The value of sum(1 to 10) is %d", sum);
    //printing the sum
    return 0;
}
