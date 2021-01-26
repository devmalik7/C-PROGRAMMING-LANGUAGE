#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, m, a[100], b[100], ca, cb;
    n = strlen(a[]);
    for (i = 0; i < n; i++)
    {
        scanf("%d \n", &a[i]);
        scanf("%d ", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            ca = ca + 1;
        }
        else if (a[i] < b[i])
        {
            cb=cb+1;
        }
    }

    printf("%d %d",ca,cb);
 return 0;
}
