#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,n,arr[1000];
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
   
    for(i=n-1;i>=0;i--)
    printf("%d ",arr[i]);
    return 0;   
}
