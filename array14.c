#include<stdio.h>
int main()
{
 //write a C program to take an array from user & print the frequency of each element in it.
    
    int a,n,b;
    
    printf("enter no. of element ");
    scanf("%d",&n);
    
    int x[n];
    printf("enter array \n");
   
    for (a=0;a<=n-1;a++)
    {
        scanf("%d",&x[a]);
    }

    printf("Frequency of the elements in this Array is\n");

    for (a=0;a<=n-1;a++)
    {   
        int c=0;

        for (b=0;b<=n-1;b++)
        {    
            if (x[a]==x[b])
            {
                c++;
            }
        }   

        printf(" %d occurs = %d times\n",a,c);
        
    }    

    return 0;
}