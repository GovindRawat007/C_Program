#include<stdio.h>
#include<string.h>
int main()
    {
        char *n;
        printf("enter the number ");
        scanf("%s",&n);
        int *a;
        *a=strrev(n);

        printf("%d",*a);     

        return 0;
    }