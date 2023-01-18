#include<stdio.h>
void main()
{
    int a,b,m;

    printf("enter number ");
    scanf("%d",&a);

    printf("enter number ");
    scanf("%d",&b);

    m = (a>b)? a:b;
    
    while(1)
    {
        if((m%a==0)&&(m%b==0))
        {
            printf("lcm is %d",m);
            break;
        }
        m++; 
}
}