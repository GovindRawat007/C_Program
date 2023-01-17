#include <stdio.h>
int main()
{
    // insert element at begining position in 1D

    int i, n, p, e;

    printf("enter the size of array ");
    scanf("%d", &n);

    printf("enter the array\n");

    int x[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("enter the number ");
    scanf("%d", &e);

    for (i = n; i >= 1; i--)
    {
        x[i] = x[i - 1];
    }

    x[0] = e;

    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", x[i]);
    }
    return 0;
}