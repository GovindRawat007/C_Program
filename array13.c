#include<stdio.h>
int main()
{
    int i,n,j,a;

    printf("enter the size ");
    scanf("%d",&n);

    int x[n];
    printf("enter the array \n");

    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    } 

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(x[i]>x[j])
            {
            a=x[i];
            x[i]=x[j];
            x[j]=a;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }

    return 0;
}