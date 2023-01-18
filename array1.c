#include<stdio.h>
int main()
{
    int x[5], y[5];
    int a;
    
    printf("enter 1st array \n");
    for (a=0;a<=4;a++)
    {
        scanf("%d",&x[a]);
    }
    
    printf("enter 2st array \n");
    for (a=0;a<=4;a++)
    {       
        scanf("%d",&y[a]);
    }
    for (a=0;a<=4;a++)
    {
        if(x[a]<y[a])
        {
            printf("2nd array is greater\n");
        }
        else if (x[a]>y[a])
        {
            printf("1st array is greater\n");
        }
        else if (x[a]==y[a])
        {
            printf("both array are equal\n");
        }

    }

    return 0;
}
