#include<stdio.h>
int main()
{
    int i,j,n,m,C,t;
    printf("enter the the row ");
    scanf("%d",&n);
    printf("enter the the row ");
    scanf("%d",&m);

    int x[n][m];
    printf("enter the array \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&x[i][j]);
        }
        printf("\n");
    }

    printf("Array is \n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }

    printf("Array's dig is \n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i>j)
            {
                printf("  ");
            }
            else
            printf("%d ",x[i][j]);
           
        }
        printf("\n");
    }

    return 0;
}