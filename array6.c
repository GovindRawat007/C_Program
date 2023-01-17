#include<stdio.h>
int main()
{
    //insert element at specific position in 2D
    int i,j,p,n,e;

    printf("enter size of array ");
    scanf("%d",&n);

    printf("enter array\n");

    int x[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("enter number which insert ");
    scanf("%d",&e);

    printf("enter the position ");
    scanf("%d",&p);

    for (i=n;i>=p;i--)
    {
        for(j=n;j>=p;j++)
        {
		    x[i][j]=x[i-1][j-1];
        }
    }
	
    x[p-1][p-1]=e;

	for (i=0;i<n+1;i++)
    {
         for(j=0;j<n+1;j++)
        {
	    	printf("%d ",x[i][j]);
        }
        printf("\n");
    }   
    return 0;
}