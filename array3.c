#include<stdio.h>

int main()
{
    //insert element at specific position in 1D
    int i,p,n,e;

    printf("enter size of array ");
    scanf("%d",&n);

    printf("enter array\n");

    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("enter number which insert ");
    scanf("%d",&e);

    int fun(n,e);

    return 0;
}
void fun(int y, int z)
{
  
    int x[y],p,i;
    printf("enter the position ");
    scanf("%d",&p);

  for ( i=y;i>=p;i--)
    {
		  x[i]=x[i-1];
    }
	
    x[p-1]=z;

	for (i=0;i<y+1;i++)
    {
		  printf("%d ",x[i]);
    }  
   
}