#include<stdio.h>
int main()
{
    int n,i,j,a=1;

    printf("enter the size of array ");
    scanf("%d",&n);

    int x[n][n];

    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a=a*x[i][j];           
        }
    }

    printf("%d",a);

    return 0;
}