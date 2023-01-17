#include<stdio.h>
int main()
{
    int n,i,y ,j;
    printf("enter size ");
    scanf("%d",&n);

    int x[n];
    printf("enter array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(x[i]>x[i++])
            {
                y=x[i];
                x[i]=x[i++];
                x[i++]=y;
            }
        }
       
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
       
    return 0;       
}