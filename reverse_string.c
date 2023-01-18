#include<stdio.h>
int main()
{
	int i,j,k,len=0;
	char a[1000],s[1000];
	scanf("%[^\ns]",a);
	for(i=1;a[i];i++){
		len++;
	}
	int n=len-1;
	for(i=len-1;i>=0;i--){
//		printf("%c",a[i]);
		if(a[i]==32){
			j=i;
		for(k=j+1;k<=n;k++){
			printf("%c",a[k]);
	   }printf(" ");
	    n=j-1;
	}
	}
	return 0;
}
