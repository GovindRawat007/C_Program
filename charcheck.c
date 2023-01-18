#include<stdio.h>
void main ()
{
    int a;
    float b,c;

    printf("enter units ");
    scanf("%d",&a);
       
    if(a<=50)
   {
        b=a*0.50;
   }

    else if(a<=150)
    {
        b=((a-50)*0.75)+a*0.50;
    }

    else if(a<=250)
    {
        b=((a-150)*1.20)+((a-50)*0.75)+a*0.50;
    }
    
    else
    {
        b=((a-250)*1.50)+((a-150)*1.20)+((a-50)*0.75)+a*0.50;
    }

    c=(b+(b*0.2));

  printf("charges %f",c);



}