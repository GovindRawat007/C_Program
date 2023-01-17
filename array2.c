#include<stdio.h>
int main()
{
    //frequency of given no. in 2d array

    int n,i,j,b;

    printf("Enter the no. of element ");
    scanf("%d",&n);

    printf("Enter array \n");
    int x[n][n];
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
            scanf("%d",&x[i][j]);
       }
       printf("\n");
    }
    
    printf("enter number ");
    scanf("%d",&b);

    int c=0;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(x[i][j]==b)
            {
                c++;
            }

        }
        
    }
     
    printf("%d occurs = %d times\n",b,c);

    return 0;
}