#include <stdio.h>
#include <string.h>

void main()
{
    char a[25] = "hello";
    char b[25] = "hello";

    if (strcmp(a,b) == 0)
    {
        printf("both are same");
    }

    else
    {
        printf("both are different");
    }
}