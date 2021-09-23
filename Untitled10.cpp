#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1,n,x;
	printf("enter the range");
	scanf("%d",&n);
	printf("fibonacci series is:");
	printf("%d %d",a,b);
	for(i=3;i<=b,i++)
	{
		x=a+b;
		printf(" %d ",x);
		a=b;
		b=x;
	}
	return(0);
}
