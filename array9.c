#include<stdio.h>
int main()
{
    //delete the element from end in 1D
    
    int i,n;

    printf("enter the size of array ");
    scanf("%d",&n);

    int x[n];
    printf("enter the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<n-1;i++)
    {
        printf("%d ",x[i]);
    }


    return 0;
}