#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000];

    int n;
    int i=0;
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);

    }

    for(int i=n-1; i>=0; i--)
    {

        printf("%d ", a[i]);
    }
    return 0;
}
