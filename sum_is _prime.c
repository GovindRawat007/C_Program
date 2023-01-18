#include<stdio.h>
//void prime(int);
int main()
{
	int a,b,f,c,d,e,g=0,i;
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%d %d",&c,&d);
		for (e=1,i=1;e<=20;e++)
		{ g=0;
			f=c+d+e;
			for (i=1;i<=f;i++)
			{
			   if (f%i==0)
			   {g++;}
			}
			if (g==2)
			{printf("%d",e);
			break;}
			else
			continue;
		}
	}
	return 0;
}
