#include<stdio.h>
int main ()
{
    //delete the element from specific position in 1D

    int i,n,p;

    printf("enter the size ");
    scanf("%d",&n);

    int x[n];
    printf("enter the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("enter position which delete ");
    scanf("%d",&p);

    for(i=p-1;i<n;i++)
    {
        x[i]=x[i+1];
    }
    
    for(i=0;i<n-1;i++)
    {
        printf("%d ",x[i]);
    }

    return 0;
}