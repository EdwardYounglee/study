#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n%2==0) {
        printf("짝수");
    }
    else {
        printf("홀수");
    }
    return 0;
}
