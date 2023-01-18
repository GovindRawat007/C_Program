#include<stdio.h>

int add(int a)
{
    if (a>0)
    {
        int c = a*add(a-1);
        return c;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    printf("enter number ");
    scanf("%d",&n);

    int x = add (n);

    printf("%d",x);

    return 0;
}