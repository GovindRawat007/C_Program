#include<stdio.h>
int main()
{
    int n,a;
   

    printf("enter 1st array size ");
    scanf("%d",&n);

   int x[n];
    for(a=0;a<=n-1;a++)
   {
    printf("enter 1st array ");
    scanf("%d",&x[a]);
   } 

    for(a=0;a<=n-1;a++)
    {
     printf("%d",x[a]);
    }
   
    return 0;
}