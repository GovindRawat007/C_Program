#include<stdio.h>
int main()
{
    //insert element at end position in 1D

    int i,n,e;

    printf("enter the size of array ");
    scanf("%d",&n);

    int x[n];
   
    printf("enter the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("enter the number ");
    scanf("%d",&e);

    x[n]=e;

    for(i=0;i<n+1;i++)
    {
        printf("%d ",x[i]);
    }

    return 0;
}