#include<stdio.h>
void main()
{
    int n,s=0,temp;

    printf("enter a number ");
    scanf("%d",&n);

    temp=n;
    while(temp>0)
    {
        s=s*10+temp%10;
        temp=temp/10;
    }
    
    if(n==s)
    {
        printf("palindrone");
    }

    else{
        printf("not palindrone");
    }

}