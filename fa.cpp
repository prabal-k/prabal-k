#include<stdio.h>
int main()
{
	int x,i,a=1;
	printf("\nEnter a number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		a=a*i;
	}
	printf("\nFoctarial of %d is %d",x,a);
}
