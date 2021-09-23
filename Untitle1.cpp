#include<stdio.h>
int main()
{
	int a=0,b=1,i=0,temp,n;
	printf("Enter the range of fibonacci series: ");
	scanf("%d",&n);
	printf("\nFibonacci series upto %d term is:\n",n);
	printf("%d %d ",a,b);
	for(i=3;i<=n;i++)
	{
		temp=a+b;
		printf("%d ",temp);
		a=b;n
		b=temp;
	}
}
