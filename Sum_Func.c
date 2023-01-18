#include<stdio.h>
void sum(int ,int );
//int sum(int ,int ); // function declaration.
int  main()
{
	int a,b;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	// function calling .
//wheever fun is called the values of actaul parameter passed to formal paramater.
//	printf(" the sum of two numbers is %d",k);
sum(a,b);
}
void sum(int p,int q)
//int sum(int p,int q)  // function definiton 
{
	int c=p+q;
//	return c;
printf("the sum of two number are :%d",c);
}
